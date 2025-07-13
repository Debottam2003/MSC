import express from 'express';
import { fileURLToPath } from 'url';
import path from 'node:path';
import pkg from 'pg';
const { Pool } = pkg;

const pool = new Pool({
    connectionString: "postgres://postgres:[password]localhost:3000/restaurant",
    max: 100
});

let data = await pool.query("select item_id from items limit 1");

// console.log(data.rows);
let __filename = fileURLToPath(import.meta.url);
let __dirname = path.dirname(__filename);
// console.log(__filename);
// console.log(__dirname);

let app = express();
// app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.get("/masterdata", (req, res) => {
    res.sendFile(path.join(__dirname, 'masterdata.html'));
});

app.post("/saveMasterData", async (req, res) => {
    try {
        console.log(req.body);
        let { item_id, name, item_description, price, type, another } = req.body;
        if (!item_id || !name || !item_description || !price || !type || !another) {
            res.status(400).send("Submit all the fields");
            return;
        }
        let { rows } = await pool.query("insert into items(item_id, name, item_description, price, type) values($1, $2, $3, $4, $5) returning name", [item_id, name, item_description, price, type]);
        console.log(rows);
        if (another === "no") {
            return res.status(200).send("Item added successfully.");
        } else {
            res.sendFile(path.join(__dirname, 'masterdata.html'));
        }
    } catch (err) {
        console.log(err);
        res.status(500).send("Internal Server error");
    }
});


app.listen(3333, () => {
    console.log("server is listening and servering on port:", 3333);
});

