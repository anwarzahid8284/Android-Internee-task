--Without 1NF
create table Stu
(
   rollNo int primary key,
   Name varchar(40),
   Course varchar(50)
);
insert into Stu values
(1,'Fawad','c,C++'),
(2,'Jawad','Java,Math');
select *from Stu;

--With 1NF
create table _1NF
(
 rolLNo int primary key,
 Name varchar(49)
);
insert into _1NF values
(1,'Fawad'),
(2,'Jawad');

select *from _1NF;

create table imp
(
  i_rollNo int,
  courseName varchar(50),
  foreign key (i_rollNo) REFERENCES _1NF(rollNo)
);
insert into imp values
(1,'C'),
(1,'C++'),
(2,'Java'),
(2,'Math');
select *from _1NF
join imp on imp.i_rollNo=_1NF.rolLNo;
--Table without 2NF
create table st_Course
(
 St_ID int,
 St_Name varchar(50),
 Course_ID int,
 Course_Name varchar(59),
 primary key(St_ID,Course_ID)
);
insert into st_Course values
(1,'Muneeb',101,'C'),
(2,'Bilal',202,'C++'),
(3,'Hassan',501,'Java');
select *from st_Course;
--with 2NF
create table students
(
  Studebt_ID int primary key,
  Student_Name varchar(50)
);
insert into students values
(1,'Muneeb'),
(2,'Bilal'),
(3,'Hassan');
select *from students;

create table Courses
(
 CourseID int primary key,
 CourseName varchar(50)
);
insert into Courses values
(101,'C'),
(202,'C++'),
(501,'Java');
select *from Courses;

create table relation
(
 cID int,
 s_ID int,
 primary key(cID,s_ID),
 foreign key (cID) references Courses(CourseID),
 foreign key (s_ID) references students(Studebt_ID)
);
insert into relation values
(101,1),
(202,1),
(202,2),
(501,3);
select *from relation;

--final output
select *from students
join relation on students.Studebt_ID=relation.s_ID
join Courses on Courses.CourseID=relation.cID;