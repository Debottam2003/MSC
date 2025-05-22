-- 1. authors

--     Attributes:
--     id, email, password, firstname, lastname

--     Primary Key:
--     email

-- 2. reviewers

--     Attributes:
--     id, email, password, firstname, lastname, phonenumber, affiliation

--     Primary Key:
--     email

-- 3. interest

--     Attributes:
--     reviewer_email, topic

--     Foreign Key:
--     reviewer_email → reviewers(email)
--     (with ON DELETE CASCADE ON UPDATE CASCADE)

-- 4. papers

--     Attributes:
--     paper_id, contact_author, name, title, abstract, filename

--     Primary Key:
--     paper_id

--     Foreign Key:
--     contact_author → authors(email)
--     (with ON DELETE CASCADE ON UPDATE CASCADE)

-- 5. rattings

--     Attributes:
--     ratting_id, reviewer_email, paper_id, technical_merit, readibility, originality, relevance

--     Primary Key:
--     ratting_id

--     Foreign Keys:

--         reviewer_email → reviewers(email)

--         paper_id → papers(paper_id)
--         (Both with ON DELETE CASCADE ON UPDATE CASCADE)

-- 6. reviews

--     Attributes:
--     reviewer_email, paper_id, ratting_id, feedback, comment

--     Foreign Keys:

--         reviewer_email → reviewers(email)

--         paper_id → papers(paper_id)

--         ratting_id → rattings(ratting_id)
--         (All with ON DELETE CASCADE ON UPDATE CASCADE)

-- 7. papers_assigned

--     Attributes:
--     reviewer_email, paper_id

--     Foreign Keys:

--         reviewer_email → reviewers(email)

--         paper_id → papers(paper_id)
--         (Both with ON DELETE CASCADE ON UPDATE CASCADE)

-- 8. papers_authors

--     Attributes:
--     paper_id, author_email

--     Foreign Keys:

--         author_email → authors(email)

--         paper_id → papers(paper_id)
--         (Both with ON DELETE CASCADE ON UPDATE CASCADE)

--Table Creation--
create table authors (
    id serial,
    email varchar(50) PRIMARY KEY,
    password varchar(30) not null,
    firstname varchar(30),
    lastname varchar(30)
);

create table reviewers (
    id serial,
    email varchar(50) PRIMARY KEY,
    password varchar(30) not null,
    firstname varchar(30),
    lastname varchar(30),
    phonenumber BIGINT,
    affiliation varchar(50)
);

create table interest (
    reviewer_email varchar(50),
    topic text,
    Foreign Key (reviewer_email) REFERENCES reviewers (email) ON DELETE CASCADE on update cascade
);

create table reviews (
    reviewer_email varchar(50) REFERENCES reviewers (email) ON DELETE CASCADE on update cascade,
    paper_id int REFERENCES papers (paper_id) ON DELETE CASCADE on update cascade,
    ratting_id int REFERENCES rattings (ratting_id) ON DELETE CASCADE on update cascade,
    feedback text,
    comment text
);

create table rattings (
    ratting_id serial PRIMARY KEY,
    reviewer_email varchar(50),
    paper_id int,
    technical_merit decimal,
    readibility decimal,
    originality decimal,
    relevance decimal,
    Foreign Key (reviewer_email) REFERENCES reviewers (email) ON DELETE CASCADE on update cascade,
    Foreign Key (paper_id) REFERENCES papers (paper_id) ON DELETE CASCADE on update cascade
);

create table papers (
    paper_id serial PRIMARY KEY,
    contact_author varchar(50),
    name varchar(30),
    title varchar(50),
    abstract text,
    filename varchar(50),
    Foreign Key (contact_author) REFERENCES authors (email) ON DELETE CASCADE on update cascade
);

create table papers_authors (
    author_email varchar(50),
    paper_id int,
    Foreign Key (author_email) REFERENCES authors(email) ON DELETE CASCADE on update cascade,
    Foreign Key (paper_id) REFERENCES papers(paper_id) ON DELETE CASCADE on update cascade
);

create table papers_assigned (
    reviewer_email varchar(50),
    paper_id int,
    Foreign Key (reviewer_email) REFERENCES reviewers(email) ON DELETE CASCADE on update cascade,
    Foreign Key (paper_id) REFERENCES papers(paper_id) ON DELETE CASCADE on update cascade
);
