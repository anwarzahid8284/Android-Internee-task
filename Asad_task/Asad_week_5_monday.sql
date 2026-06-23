CREATE DATABASE school;
USE school;
CREATE TABLE student(
Roll_No int primary key,
Name varchar(40),
Father varchar(45)
);


INSERT INTO student Values
(1,'Sajad','Dil Nawaz'),
(2,'Walid','Gulbat'),
(3,'Sher','Sher alam');

--Teacher Table
CREATE TABLE teacher(
Name varchar(59),
ID int primary key,
Subject varchar(50)
); 
--Insert data into teacher table
insert into teacher values
('Tariq',2323,'Bio'),
('Adana',12201,'Englsh'),
('Bilal',9393,'Math');


--Class TAble
CREATE TABLE class(
class_Name varchar(50),
class_ID int primary key
);
--Insert data into class table
insert into class values
('9th',0324),
('10th',34),
('3rd',999);

--show all tables
select *from teacher;
select *from student;
select *from class;