# Write your MySQL query statement below
select e.employee_id, e.name, count(e.employee_id) as reports_count, 
round(avg(eu.age)) as average_age
from Employees  as e inner join Employees as eu
where e.employee_id=eu.reports_to
group by employee_id
order by employee_id


