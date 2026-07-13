create table Transactions
(
 Acc_ID int primary key,
 Name varchar(50),
 Balance int
);


Insert into Transactions values
(12201,'Waqar',1000),
(12202,'Asif',500);
 select *from Transactions;
 --Transaction
 Begin Transaction;
 Begin try
 
 update Transactions
 set Balance=Balance-200 where Acc_ID=12201;
 Update Transactions
 set Balance=Balance+200 where Acc_ID=12202
 commit;
 end try
 begin catch
 rollback;
 end catch;
 select *from Transactions;
