const mysql = require('mysql2');
const pool = mysql.createPool({
    host: 'localhost',  // MariaDB server host
    user: 'root',       // Your MariaDB username
    password: '', // Your MariaDB password
    database: 'restaurant', // Your database name
  });
  
  // Test database connection
  pool.getConnection((err, connection) => {
    if (err) {
      console.error('Error connecting to MariaDB:', err);
      return;
    }
    console.log('Connected to MariaDB');
    connection.release(); // Release the connection
  });

module.exports = pool;