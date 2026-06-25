
CREATE TABLE  st_Acount(
id INT PRIMARY KEY ,
  name VARCHAR(50),
  amount INT
);

BEGIN TRANSACTION ;

INSERT INTO  st_Acount VALUES(101,'Ali',3000);
INSERT INTO  st_Acount VALUES(102,'Akmal',4000); 
INSERT INTO  st_Acount VALUES(103,'Ahmad',600);

UPDATE  st_Acount 
SET amount=8000
WHERE id=102;
COMMIT;

BEGIN TRANSACTION;
  UPDATE st_Acount 
  SET name='Shahid'
  WHERE id=101;

  DELETE st_Acount 

  WHERE id=103;
  
ROLLBACK;

SELECT * FROM st_Acount;
