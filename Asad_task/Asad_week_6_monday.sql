create table customer
(
  CustomerID int primary key,
  Name varchar(50),
  Phone varchar(50)
);

insert into customer values
(1,'ijaz',0344),
(2,'Naveed',0323),
(3,'Majid',0322); 

create table Products
(
  ProductID int primary key,
  ProductName varchar(50),
  Price varchar(50)
);
insert into Products values
(101,'Laptop',2200),
(102,'Pen',50),
(103,'Screen',1500);

create table Orders(  
OrderID int primary key,
CustomerID int,
foreign key(CustomerID) References 
customer(CustomerID)
);
insert into Orders values
(1001,1),
(1002,1),
(1003,2),
(1004,3);
create table Relation(
OrderID int,
productID int,
foreign key(OrderID) references Orders(OrderID),
foreign key(productID) references Products(ProductID)
);
insert into Relation values
(1001,102),
(1002,103)
insert into Relation values(1003,101);
insert into Relation values(1004,103);
select customer.CustomerID,customer.Name,customer.Phone,Orders.OrderID,Products.ProductID,
Products.ProductName,Products.Price from customer
join Orders on Orders.CustomerID=customer.CustomerID
join Relation on Relation.OrderID=Orders.OrderID
join Products on Relation.productID=Products.ProductID;
