# Write your MySQL query statement below
select e.employee_id from Employees as e join Employees as eu
where e.salary<30000 and e.manager_id not in(select eu.employee_id from Employees as eu)
group by employee_id order by employee_id