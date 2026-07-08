create table student1(
Roll int primary key,
StudentName varchar(49)
);
insert into student1 values
(1,'Sufyan'),
(2,'Shazaib'),
(3,'Latif'),
(4,'waseem');

create table Course1(
CourseID int primary key,
CourseName varchar(50)
);
insert into Course1 values
(1001,'C++'),
(1002,'C#'),
(1003,'C'),
(1004,'Java');
create table Enrollment(
CourseID_en int,
Roll_en int,
foreign key(CourseID_en) references Course1(CourseID),
foreign key(Roll_en) references student1(Roll)
);

insert into Enrollment values
(1001,1),
(1001,3),
(1002,2),
(1003,3),
(1004,4);
select *from Course1;
select *from student1;

--Index Creation
create index my_index 
on student1(studentName);

select Course1.CourseID,Course1.CourseName,student1.Roll,student1.StudentName from Enrollment
inner join Course1 on Course1.CourseID=Enrollment.CourseID_en
inner join student1 on student1.Roll=Enrollment.Roll_en
where student1.StudentName='shazaib';