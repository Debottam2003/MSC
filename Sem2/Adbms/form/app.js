import pkg from 'pg';
import cors from 'cors'
import express from 'express'
import { fileURLToPath } from 'url';
import path from 'path';
const { Pool } = pkg;
import dotenv from 'dotenv';
dotenv.config();

const pool = new Pool({
    user: process.env.DB_USER,
    host: process.env.DB_HOST,
    database: process.env.DB_NAME,
    password: process.env.DB_PASSWORD,
    port: process.env.DB_PORT,
});

const __filename = fileURLToPath(import.meta.url);
console.log(__filename);
const __dirname = path.dirname(__filename);
console.log(__dirname);

const app = express();

app.use(cors());

// Parses the json Data
// Middleware to parse application/json
app.use(express.json({ extended: true }));
// Pareses the urlencoded Data
// Middleware to parse application/x-www-form-urlencoded
app.use(express.urlencoded({ extended: true }));

// Server Rendered Form
app.get('/', (req, res) => {
    res.send(`
        <style>
        body {
          font-family: Arial, sans-serif;
          background: #f4f4f4;
          display: flex;
          justify-content: center;
          align-items: center;
          height: 100vh;
        }
        form {
          background: #fff;
          padding: 2rem 2.5rem;
          border-radius: 8px;
          box-shadow: 0 2px 8px rgba(0,0,0,0.1);
        }
        label {
          display: block;
          margin-bottom: 1rem;
        }
        input[type="email"],
        input[type="text"],
        input[type="number"]{
          width: 100%;
          padding: 0.5rem;
          margin-top: 0.25rem;
          border: 1px solid #ccc;
          border-radius: 4px;
        }
        button {
          background: #007bff;
          color: #fff;
          border: none;
          padding: 0.75rem 1.5rem;
          border-radius: 4px;
          cursor: pointer;
          font-size: 1rem;
        }
        button:hover {
          background: #0056b3;
        }
      </style>
      <body>
      <form action="/login" method="POST">
        <label>Name: <input type="text" name="name" required /></label>
        <label>Email: <input type="email" name="email" required /></label>
        <label>Phone Numebr: <input type="number" name="phone" required /></label>
        <button type="submit">Login</button>
      </form>
      </body>
    `)
});

// when form is submitted in get method data will be seen in the url in urlencoded form
// and data is available in the req.query object

app.get('/login', (req, res) => {
    console.log(req.query);
    res.send("Form Submitted Successfully");
});

app.post('/login', async (req, res) => {
    try {
        console.log("data received");
        console.log(req.body);
        const { email, name, phone } = req.body;
        if (!email || !name || !phone) {
            return res.status(400).send("provide all fields");
        }
        await pool.query('insert into form(name, email, phone) values($1, $2, $3)', [name, email, phone]);
        res.status(200).send("Form Submitted Successfully");
    }
    catch (err) {
        res.send(err.message);
    }
});

app.use(express.static(path.join(__dirname, 'public')));

app.get('/form', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'form.html'));
});

app.listen(process.env.PORT, () => {
    console.log("Server is running on port: ", process.env.PORT);
});