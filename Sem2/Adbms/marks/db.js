import pkg from "pg";
const { Pool } = pkg;
const pool = new Pool({
    connectionString: "postgres://postgres:okudera2003@localhost:3000/university",
    max: 100
});

try {
    let { rows } = await pool.query("select * from student_marks limit 1");
    console.log("Data Base connected successfully");
} catch (err) {
    console.log(err);
}

export default pool;



