/** 
 * @author Debottam Kar
*/

import express from 'express';
import cors from 'cors';
import pool from './db.js';

const app = express();

app.use(cors());
app.use(express.urlencoded({ extended: true }));

app.get("/", (req, res) => {
    console.log("Request came in route: ", req.url);
    res.send(`<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Marks Form</title>
    <style>
        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }

        body {
            height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background:rgb(0, 0, 0);
        }

        form {
            background: #fff;
            padding: 30px 40px;
            border-radius: 10px;
            box-shadow: 0 8px 16px rgba(0, 0, 0, 0.1);
            width: 300px;
            display: flex;
            flex-direction: column;
            gap: 15px;
        }

        input[type="email"],
        input[type="number"] {
            padding: 10px;
            border: 1px solid #ccc;
            border-radius: 6px;
            font-size: 1rem;
            transition: border-color 0.3s;
        }

        input:focus {
            border-color: #007BFF;
            outline: none;
        }

        button {
            padding: 10px;
            background: #007BFF;
            color: #fff;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            font-size: 1rem;
            transition: background-color 0.3s;
        }

        button:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <form action="/marks" method="post">
        <input type="email" name="email" placeholder="Name" required />
        <input type="number" name="subject1" placeholder="Subject 1" max="100" required />
        <input type="number" name="subject2" placeholder="Subject 2" max="100" required />
        <input type="number" name="subject3" placeholder="Subject 3" max="100" required />
        <input type="number" name="subject4" placeholder="Subject 4" max="100" required />
        <button type="submit">Submit</button>
    </form>
</body>
</html>
`);
});

app.post("/marks", async (req, res) => {
    try {
        // console.log("Request came in route: ", req.url);
        let { email, subject1, subject2, subject3, subject4 } = req.body;
        console.log(req.body);
        await pool.query("insert into student_marks(email, subject1, subject2, subject3, subject4) values($1, $2, $3, $4, $5)", [email, subject1, subject2, subject3, subject4]);
        res.status(200).send("Data Inserted successfully");
    } catch (error) {
        console.log(error.message);
        res.status(500).send({ message: "internal server error" });
    }
});

app.get("/data", async (req, res) => {
    try {
        let { rows } = await pool.query("select * from student_marks");
        res.send(rows);
    } catch (err) {
        res.status(500).send({ message: "internal server error" });
    }
});

app.get("/stat/totalStudents", async (req, res) => {
    try {
        let { rows } = await pool.query("select count(email) as total from student_marks");
        res.status(200).send(rows[0]);
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.get("/stat/subject1", async (req, res) => {
    try {
        let ninety = await pool.query("select count(email) as total_std from student_marks where subject1 >= 90;");
        let fourty = await pool.query("select count(email) as total_std from student_marks where subject1 <= 40;");
        res.send({ greater_than_ninety: ninety.rows[0].total_std, less_than_fourty: fourty.rows[0].total_std });
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.get("/stat/subject2", async (req, res) => {
    try {
        let ninety = await pool.query("select count(email) as total_std from student_marks where subject2 >= 90;");
        let fourty = await pool.query("select count(email) as total_std from student_marks where subject2 <= 40;");
        res.send({ greater_than_ninety: ninety.rows[0].total_std, less_than_fourty: fourty.rows[0].total_std });
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.get("/stat/subject3", async (req, res) => {
    try {
        let ninety = await pool.query("select count(email) as total_std from student_marks where subject3 >= 90;");
        let fourty = await pool.query("select count(email) as total_std from student_marks where subject3 <= 40;");
        res.send({ greater_than_ninety: ninety.rows[0].total_std, less_than_fourty: fourty.rows[0].total_std });
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.get("/stat/subject4", async (req, res) => {
    try {
        let ninety = await pool.query("select count(email) as total_std from student_marks where subject4 >= 90;");
        let fourty = await pool.query("select count(email) as total_std from student_marks where subject4 <= 40;");
        res.send({ greater_than_ninety: ninety.rows[0].total_std, less_than_fourty: fourty.rows[0].total_std });
    } catch (err) {
        res.status(500).send("Internal server error");
    }
});

app.listen(3333, () => {
    console.log("The Server is running and listening on port: 3333");
});