# Write your MySQL query statement below

SELECT firstName, lastName, city, state from 

Person as p LEFT JOIN Address as a
on p.personId = a.personId