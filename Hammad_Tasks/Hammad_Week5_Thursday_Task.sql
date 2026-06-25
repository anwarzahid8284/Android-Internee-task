CREATE TABLE student(
  s_id INT PRIMARY KEY,
  s_name VARCHAR(50)
);
CREATE TABLE courses(
  c_id INT PRIMARY KEY,
  c_name VARCHAR(50)
);

INSERT INTO student VALUES(101,'Ali');
INSERT INTO student VALUES(102,'Ahmad');
INSERT INTO student VALUES(103,'hammas');
INSERT INTO student VALUES(104,'Akmal');
INSERT INTO student VALUES(105,'Hasher');

INSERT INTO courses VALUES(101,'English');
INSERT INTO courses VALUES(106,'Urdo');
INSERT INTO courses VALUES(102,'Math');
INSERT INTO courses VALUES(109,'computer');
INSERT INTO courses VALUES(103,'science');

-- INNER JOIN

SELECT * 
FROM student
INNER JOIN courses
ON student.s_id=c_id;

--LEFT JOIN

SELECT * 
FROM student
LEFT JOIN courses
ON student.s_id=c_id;

--RIGHT JOIN JOIN

SELECT * 
FROM student
RIGHT  JOIN courses
ON student.s_id=c_id;