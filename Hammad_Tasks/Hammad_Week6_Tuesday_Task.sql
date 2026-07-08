/*
        1NF ke Example and per usy ko teek krna using 2NF 
        In this case comes some problems like 
        the insertion ,updatation,deletion Anomaly

        -- 1NF Table Structure
CREATE TABLE Orders_1NF (
    OrderID INT,
    CustomerName VARCHAR(100),
    
    Product VARCHAR(100),
    
    TotalPrice DECIMAL(10,2),
    
    PRIMARY KEY (OrderID, Product) -- Composite Primary Key
);

-- Data insertion 

INSERT INTO Orders_1NF VALUES 

(101, "Ahmad Hammad",  "Laptop", 1200),
(101, "Ahmad Hammad",  "Mouse", 50),
(102, "Ahmad Hammad", "Keyboard", 50);

*/


-- now i remove the insertion ,updatation,deletion Anomaly by using 2NF

CREATE TABLE customer(
  cust_id INT AUTO_INCREMENT PRIMARY KEY,
  cust_name VARCHAR(50)
);


CREATE TABLE product(
pr_id INT AUTO_INCREMENT PRIMARY KEY,
pr_name VARCHAR(50),
price DECIMAL(10,2)
);

CREATE TABLE orders(
  or_id INT ,
  pr_id INT,
  cust_id INT ,

  PRIMARY KEY (or_id,pr_id),

  FOREIGN KEY (pr_id) REFERENCES product(pr_id),
  FOREIGN KEY (cust_id) REFERENCES customer(cust_id)
);


INSERT INTO customer (cust_name)
VALUES ("Ahmad hammad");

INSERT INTO product (pr_name,price)
VALUES ("pc",3000),
("mouse",50),
("keyboard",50);

INSERT INTO orders (or_id,cust_id,pr_id)

VALUES (101,1,1),
(101,1,2),
(102,1,3);

SELECT 
    o.or_id AS OrderID,
    c.cust_name AS CustomerName,
    p.pr_name AS ProductName,
    p.price AS Price
FROM orders o
JOIN customer c ON o.cust_id = c.cust_id
JOIN product p ON o.pr_id = p.pr_id;