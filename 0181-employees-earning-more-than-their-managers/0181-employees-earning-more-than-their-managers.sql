# Write your MySQL query statement below
select e.name AS Employee
from Employee e
join Employee b
on b.id=e.managerid
where e.salary>b.salary;