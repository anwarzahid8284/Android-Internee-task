create table student3
(
 stID int primary key,
 stName varchar(50),
);

insert into student3 values
(1,'Naweed'),
(2,'Jamal'),
(3,'Hamid');

select *from student3;
create table course2
(
  c_ID int primary key,
  c_NAme varchar(50)
);

insert into course2 values
(101,'C++'),
(102,'Java'),
(103,'Math');

select *from course2;

create table relation1
(
 re_S_ID int,
 re_C_ID int,
 foreign key (re_S_ID) references student3(stID),
 foreign key (re_C_ID) references course2(c_ID)
);
insert into relation1 values
(1,101),
(2,102);
go
create view showAll
as
select *from student3
join relation1 on relation1.re_S_ID=student3.stID
join course2 on relation1.re_C_ID=course2.c_ID;
go
select *from showAll;