# Write your MySQL query statement below

# SELECT e1.name

# from Employee as e1, Employee as e2

# where e1.managerId = e2.id and e1.salary>e2.salary

SELECT Name as Employee FROM Employee e
WHERE Salary > (
    Select Salary FROM Employee m WHERE m.Id = e.ManagerId
)