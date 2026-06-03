CREATE DATABASE School;
USE School;

CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    DateOfBirth DATE
);
INSERT INTO Students (StudentID, FirstName, LastName, DateOfBirth) VALUES 
(101, 'Aamir', 'Khan', '2003-05-12'),
(102, 'Hammad ', 'Khan', '2004-09-21'),
(103, 'Sir Anwar', 'Zahid', '2005-01-15'),
(104, ' Asad', 'Khan', '2006-03-30');

SELECT * FROM Students;

SELECT FirstName, LastName FROM Students WHERE LastName = 'Khan';


