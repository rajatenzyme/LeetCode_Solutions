# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below


DELETE p1

from Person p1, person p2

where p1.email = p2.email

and p1.id>p2.id