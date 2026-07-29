CREATE TABLE Student( 
  st_id INT PRIMARY KEY,
  st_name VARCHAR(50),
  st_marks INT
);

INSERT INTO Student VALUES(1,'Ali',400),(2,'Shahid',430),(3,'Ali',450);

BEGIN TRANSACTION ;

  BEGIN TRY

    UPDATE Student SET 
    st_name='Rohail'
    WHERE st_id=1;
    COMMIT ;
  
  END TRY


  BEGIN CATCH
  
    ROLLBACK;
  
  END CATCH;

  SELECT * FROM Student;