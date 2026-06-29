CREATE TABLE company( -- Week 5 Saturday Task 
  com_id  INT PRIMARY KEY,
  com_Prod_Name VARCHAR(50)

);
CREATE TABLE emp(
  emp_id INT PRIMARY KEY,
  emp_Name VARCHAR(50),

  com_id  INT, -- this is foreign key takes reference from compnay id column
  FOREIGN KEY (com_id)  REFERENCES company(com_id)
);

INSERT INTO company VALUES(202,'books');

INSERT INTO company VALUES(203,'markers');

INSERT INTO company VALUES(204,'urdo_Pages');

INSERT INTO company VALUES(205,'english_Pages');

------------------------------------------
------------------------------------------

INSERT INTO emp VALUES(101,'Ali',202);

INSERT INTO emp VALUES(102,'Ali',202);

INSERT INTO emp VALUES(103,'Arshad',204);

INSERT INTO emp VALUES(104,'Ahmad',203);

INSERT INTO emp VALUES(105,'roheel',205);

INSERT INTO emp VALUES(106,'Shahid',205);

-----------------------------------------
-----------------------------------------

CREATE INDEX indx_emp_Name ON emp(emp_Name);

SELECT * FROM emp as e 
INNER JOIN company as c
ON e.com_id =c.com_id
WHERE
 emp_Name='Ali';