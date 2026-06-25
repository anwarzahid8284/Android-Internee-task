CREATE TABLE company(
  name_com VARCHAR(50),
  name_product VARCHAR(50),
  sale INT
);

INSERT INTO company VALUES('Samsung', 'Mobile', 500);
INSERT INTO company VALUES('Samsung', 'Laptop', 700);
INSERT INTO company VALUES('Apple',   'Mobile', 900);
INSERT INTO company VALUES('Apple',   'Laptop', 950);
INSERT INTO company VALUES('Apple',    'Laptop', 400);
INSERT INTO company VALUES('Dell',    'Desktop',300);
                      -- Aggregate Functions
SELECT SUM(sale) 
FROM company;

SELECT AVG(sale) 
FROM company;

SELECT COUNT(sale) 
FROM company;

-- Group By 

SELECT name_com , COUNT(sale) FROM company 
GROUP BY name_com;

-- Group By  with Having 

SELECT name_com , COUNT(sale) FROM company 
GROUP BY name_com
HAVING COUNT(sale)>1; -- having work just like where but where check individual
-- and they check group wise