CREATE TABLE Department(
    dep_id INT PRIMARY KEY,
    dep_name VARCHAR(50)
);

CREATE TABLE Student(
    st_id INT PRIMARY KEY,
    st_name VARCHAR(50),
    dep_id INT,
    FOREIGN KEY (dep_id) REFERENCES Department(dep_id)
);

INSERT INTO Department VALUES (1, 'CS'), (2, 'SE');

INSERT INTO Student VALUES (101, 'ali', 1), (102, 'akmal', 2), (103, 'shahid', 1);

CREATE VIEW vW_StudentDetail AS
SELECT 
    Student.st_id,
    Student.st_name,
    Department.dep_name
FROM Student
INNER JOIN Department ON Student.dep_id = Department.dep_id;

SELECT * FROM vW_StudentDetail;

CREATE PROCEDURE sp_StudentByDep
    @dep VARCHAR(50)
AS 
BEGIN 
    SELECT * 
    FROM vW_StudentDetail
    WHERE dep_name = @dep;
END;

EXEC sp_StudentByDep @dep = 'CS';