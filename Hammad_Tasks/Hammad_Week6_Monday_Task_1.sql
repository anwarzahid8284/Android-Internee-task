CREATE TABLE customers(
c_id INT PRIMARY KEY,

c_name VARCHAR(50)
); 

CREATE TABLE company(
com_id INT PRIMARY KEY,
pro_name VARCHAR(50)
); 

INSERT INTO customers
VALUES 
(101,'Alli'),
 (102,'Ahmad'), 
  (103,'Rashid'); 


INSERT INTO company 
VALUES
(501,'shirt'),
(502,'shows'),
(503,'laptops'); 

CREATE TABLE relationTable( 
custom_id INT REFERENCES customers(c_id), 
company_id INT REFERENCES company(com_id)
 );
 
 INSERT INTO relationTable 
 VALUES 
 (101,501),
 (101,502), 
 (102,503);
 
 
 
 SELECT * FROM relationTable;
 
 SELECT 
 relationTable.custom_id,
  customers.c_name,
   relationTable.company_id,
   company.pro_name

 FROM relationTable
 INNER JOIN customers ON  relationTable.custom_id=customers.c_id
 INNER JOIN company ON   relationTable.company_id=company.com_id
 
 