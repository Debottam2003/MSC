select users.userid, users.name, marks.marks, books.bookname 
from users, marks, books 
where users.userid = marks.userid 
	and users.userid = books.userid;

SELECT 
    users.userid, 
    users.name, 
    marks.marks, 
    books.bookname
FROM 
    users
JOIN 
    marks ON users.userid = marks.userid
JOIN 
    books ON users.userid = books.userid;
