use collage;
CREATE TABLE crud
(
  Reg_no int primary key,
  Name varchar(50),
  balance varchar(50)
);
--Insert data
insert into crud values
(1,'jalal',500),
(2,'sajid',3000),
(4,'saad',200);
insert into crud values(3,'nawab',100);

--Update data
update crud set Name='Shazaib' where Reg_no=4;
insert into crud values(5,'ali',800);

--delete data
delete crud where Reg_no=5;

Begin try;
BEGIN TRANSACTION;
update crud set balance=balance-400 where Reg_no=2;
update crud set balance=balance+400 where Reg_no=4;
select 1/0;
COMMIT;
END TRY
BEGIN CATCH
rollback;
end catch;

select * from crud;
