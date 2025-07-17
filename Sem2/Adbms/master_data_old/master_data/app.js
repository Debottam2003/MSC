import express from 'express';
import cors from 'cors';
import { fileURLToPath } from 'url';
import path from 'node:path';
import pkg from 'pg';
const { Pool } = pkg;

const pool = new Pool({
    // connectionString: "postgres://postgres:[password]localhost:3000/restaurant",
    connectionString: "postgresql://postgres.klkpybbgsjpkgwurrxkw:okudera2003@aws-0-ap-southeast-1.pooler.supabase.com:6543/postgres",
    max: 100
});

let data = await pool.query("select item_id from items limit 1");

// console.log(data.rows);
let __filename = fileURLToPath(import.meta.url);
let __dirname = path.dirname(__filename);
// console.log(__filename);
// console.log(__dirname);

let app = express();
app.use(cors());
// app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(express.static(__dirname));

app.get("/masterdata", (req, res) => {
    res.sendFile(path.join(__dirname, 'masterdata.html'));
});

app.get("/order", (req, res) => {
    res.sendFile(path.join(__dirname, 'order_form.html'));
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

app.post('/submit-order', async (req, res) => {
    const {
        order_date,
        customer_name,
        customer_address,
        pincode,
        item,
        quantity,
        'delivery-person': delivery_person
    } = req.body;
    console.log(req.body);

    // Insert order into 'orders' table
    try {
        const orderSql = 'INSERT INTO orders (order_date, customer_name, customer_address, pincode, delivery_person) VALUES ($1, $2, $3, $4, $5) returning order_id';
        const orderValues = [order_date, customer_name, customer_address, pincode, delivery_person];

        let data = await pool.query(orderSql, orderValues);

        // Ensure item and quantity are arrays
        let items = Array.isArray(item) ? item : [item];
        let quantities = Array.isArray(quantity) ? quantity : [quantity];

        // Prepare multiple inserts for order_items
        const itemSql = 'INSERT INTO order_items (order_id, item_name, quantity) VALUES ($1, $2, $3)';

        if (Array.isArray(items)) {
            for (let i = 0; i < items.length; i++) {
                await pool.query(itemSql, [data.rows[0].order_id, items[i], quantities[i]]);
            }
            res.send("Order placed Successfully.");
        }
        else {
            await pool.query(itemSql, [data.rows[0].order_id, ...items, ...quantities]);
            res.send("Order placed Successfully.");
        }

    } catch (err) {
        console.log(err);
        res.status(500).send("Internal server error");
    }

});


app.get("/api/items", async (req, res) => {
    try {
        console.log("Request Came");
        let { rows } = await pool.query("Select item_id, name from items");
        console.log(rows);
        res.status(200).send(rows);
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.listen(3333, () => {
    console.log("server is listening and servering on port:", 3333);
});