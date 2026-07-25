//        Implementation of 3NF

CREATE TABLE City_of_Student(
  city_id INT PRIMARY KEY,
  city_name VARCHAR(50)
);

INSERT INTO City_of_Student VALUES(200,'Islamabad');


CREATE TABLE Student(
  Student_id INT PRIMARY KEY,
  Student_Name VARCHAR(50),

  stu_city_code INT ,

  FOREIGN KEY (stu_city_code) REFERENCES City_of_Student(city_id)
);

INSERT INTO Student VALUES(1,'Ali',200);
INSERT INTO Student VALUES(2,'Kaml',200);
INSERT INTO Student VALUES(3,'Akhter',200);

update City_of_Student set 
city_name ='North Islamabd ' 
where city_id=200;

SELECT 
Student.Student_id,
Student.Student_Name,
City_of_Student.city_id,
City_of_Student.city_name
FROM Student
INNER JOIN City_of_Student 
ON Student.stu_city_code=City_of_Student.city_id;
