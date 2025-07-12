import express from 'express';
import pkg from 'pg';
const { Pool } = pkg;

const pool = new Pool({
    connectionString: "postgres://postgres:okudera2003@localhost:3000/restaurant",
    max: 100
});

let data = await pool.query("select id from items limit 1");

// console.log(data.rows);

let app = express();
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.get("/masterdata", (req, res) => {
    res.send("<h1>This is a form</h1>");
});

app.listen(3333, () => {
    console.log("server is listening and servering on port:", 3333);
});

