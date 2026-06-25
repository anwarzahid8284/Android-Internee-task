CREATE TABLE student(
st_ID int primary key,
st_Name varchar(40),
class varchar(30)
);

insert into student values
(11,'zaki','8th'),
(22,'waqar','9th'),
(33,'Usman','7th');

--show all table
select * from student;

select st_ID,class from student;

select *from student where st_ID=33;
select * from student where st_ID>22;