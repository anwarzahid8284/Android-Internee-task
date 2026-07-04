--inner join 
select *from Course
inner join Marks on Marks.ID=Course.CourseID
inner join student on student.ID=Course.CourseID;

--left join
select *from Course
left join Marks on Marks.ID=Course.CourseID
left join student on student.ID=Course.CourseID;
