const express = require('express');
const mysql = require('mysql');
const path = require('path');

const app = express();
const PORT = 3333;

// Middleware
app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

// Connection Pool
const pool = mysql.createPool({
  connectionLimit: 10,
  host: 'localhost',
  user: 'root',
  password: '',
  database: 'restaurantdb'
});

// Handle Order Form Submission
app.post('/submit-order', (req, res) => {
  const {
    order_date,
    customer_name,
    customer_address,
    pincode,
    item,
    quantity,
    'delivery-person': delivery_person
  } = req.body;

  // Insert order into 'orders' table
  const orderSql = 'INSERT INTO orders (order_date, customer_name, customer_address, pincode, delivery_person) VALUES (?, ?, ?, ?, ?)';
  const orderValues = [order_date, customer_name, customer_address, pincode, delivery_person];

  pool.query(orderSql, orderValues, (err, orderResult) => {
    if (err) {
      console.error('Order insert error:', err);
      return res.status(500).send('Failed to save order');
    }

    const orderId = orderResult.insertId;

    // Ensure item and quantity are arrays
    let items = Array.isArray(item) ? item : [item];
    let quantities = Array.isArray(quantity) ? quantity : [quantity];

    // Prepare multiple inserts for order_items
    const itemSql = 'INSERT INTO order_items (order_id, item_name, quantity) VALUES ?';
    const itemValues = items.map((itm, idx) => [
      orderId,
      itm,
      quantities[idx] || 1
    ]);

    pool.query(itemSql, [itemValues], (err) => {
      if (err) {
        console.error('Item insert error:', err);
        return res.status(500).send('Failed to save order items');
      }

      res.send(`<h2>Order Saved Successfully!</h2><a href="/order_form.html">Add Another</a>`);
    });
  });
});

// Server start
app.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
});
