create table student4
(
 St_ID int primary key,
 St_Name varchar(50)
);

insert into student4 values
(1,'Rashid'),
(2,'Wajid');
select *from student4;


create table Course4
( 
 Co_ID int primary key,
 Co_Name varchar(50)
);

insert into Course4 values
(101,'C++'),
(102,'Kotlin');
select *from Course4;


create table enrollment1
(
 enroll_ID int primary key,
 st_ID int,
 Co_ID int,
 foreign key (st_ID) references student4(st_ID),
 foreign key (Co_ID) references Course4(Co_ID)
);

insert into enrollment1 values
(1001,1,101),
(1002,2,101);

select *from enrollment1;
select *from student4;
select *from Course4;


select student4.St_ID, student4.St_Name,Course4.Co_ID, Course4.Co_Name,enrollment1.enroll_ID from   student4
inner join enrollment1 on enrollment1.st_ID=student4.St_ID
inner join Course4 on Course4.Co_ID=enrollment1.Co_ID

--Optimization
--Index Creation
CREATE INDEX myIndex ON student4(St_Name);
SELECT *from student4
where St_Name='Wajid'