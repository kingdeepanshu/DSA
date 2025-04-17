# Write your MySQL query statement below
select EmployeeUNI.unique_id, Employees.name from Employees left join employeeuni on employees.id = employeeuni.id;