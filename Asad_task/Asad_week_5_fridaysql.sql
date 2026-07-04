select *from sale;
--Total quantity
select SUM(Quantity) from sale;
--Coount
select COUNT(*) from sale;
--Average
select AVG(price) from sale;
select Produt,sum(Quantity) from sale group by Produt;
select Produt,SUM(Quantity) from sale group by Produt having SUM(Quantity)>3;