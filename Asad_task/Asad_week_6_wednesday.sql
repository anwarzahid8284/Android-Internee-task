--Without 3NF
create table student2
(
 StudentID int primary key,
 st_City varchar(50),
 st_Statae varchar(50)
);
insert into student2 values
(1,'Tank','KPK'),
(2,'Tank','KPK'),
(3,'Lahore','Punjab');
select *from student2;

--with 3NF
create table student_2
(
 studentID int primary key,
 st_city varchar(50)
);
insert into student_2 values
(1,'Tank'),
(2,'Tank'),
(3,'Lahore');

select *from student_2;

create table city_state
(
 st_city varchar(50) primary key,
 st_state varchar(50)
);
insert into city_state values
('Tank','KPK'),
('Lahore','Punjab');

select *from city_state;
select student_2.studentID,student_2.st_city, city_state.st_state from student_2
join city_state on city_state.st_city=student_2.st_city;