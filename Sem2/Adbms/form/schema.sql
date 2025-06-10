create table form (
    id serial,
    email varchar(30) PRIMARY KEY,
    password varchar(30)
);

insert into form(email, passowrd) values('deb@gmail.com', 'ayanokoji');