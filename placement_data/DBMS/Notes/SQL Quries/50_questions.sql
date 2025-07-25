-- Q-1. Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME>.
select first_name AS WORKER_NAME from worker;

-- Q-2. Write an SQL query to fetch “FIRST_NAME” from Worker table in upper case.
select UPPER(first_name) from worker;

-- Q-3. Write an SQL query to fetch unique values of DEPARTMENT from Worker table.
SELECT distinct department from worker;

-- Q-4. Write an SQL query to print the first three characters of  FIRST_NAME from Worker table.
select substring(first_name, 1, 3) from worker;

-- Q-5. Write an SQL query to find the position of the alphabet (‘b’) in the first name column ‘Amitabh’ from Worker table.
select INSTR(first_name, 'B') from worker where first_name = 'Amitabh';

-- Q-6. Write an SQL query to print the FIRST_NAME from Worker table after removing white spaces from the right side.
select RTRIM(first_name) from worker;

-- Q-7. Write an SQL query to print the DEPARTMENT from Worker table after removing white spaces from the left side.
select LTRIM(first_name) from worker;

-- Q-8. Write an SQL query that fetches the unique values of DEPARTMENT from Worker table and prints its length.
select distinct department, LENGTH(department) from worker;

-- Q-9. Write an SQL query to print the FIRST_NAME from Worker table after replacing ‘a’ with ‘A’.
select REPLACE(first_name, 'a', 'A')  from worker;

-- Q-10. Write an SQL query to print the FIRST_NAME and LAST_NAME from Worker table into a single column COMPLETE_NAME.
-- A space char should separate them.
select CONCAT(first_name, ' ', last_name) AS COMPLETE_NAME from worker;

-- Q-11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.
select * from worker ORDER by first_name;

-- Q-12. Write an SQL query to print all Worker details from the Worker table order by 
-- FIRST_NAME Ascending and DEPARTMENT Descending.
select * from worker order by first_name, department DESC;

-- Q-13. Write an SQL query to print details for Workers with the first name as “Vipul” and “Satish” from Worker table.
select * from worker where first_name IN ('Vipul', 'Satish');

-- Q-14. Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.
select * from worker where first_name NOT IN ('Vipul', 'Satish');

-- Q-15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin*”.
select * from worker where department LIKE 'Admin%';

-- Q-16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.
select * from worker where first_name LIKE '%a%';

-- Q-17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.
select * from worker where first_name LIKE '%a';

-- Q-18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.
select * from worker where first_name LIKE '_____h';

-- Q-19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.
select * from worker where salary between 100000 AND 500000;

-- Q-20. Write an SQL query to print details of the Workers who have joined in Feb’2014.
select * from worker where YEAR(joining_date) = 2014 AND MONTH(joining_date) = 02;

-- Q-21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.
select department, count(*) from worker where department = 'Admin';

-- Q-22. Write an SQL query to fetch worker full names with salaries >= 50000 and <= 100000.
select concat(first_name, ' ', last_name) from worker
where salary between 50000 and 100000;

-- Q-23. Write an SQL query to fetch the no. of workers for each department in the descending order.
select department, count(worker_id) AS no_of_worker from worker group by department
ORDER BY no_of_worker desc;

-- Q-24. Write an SQL query to print details of the Workers who are also Managers.
select w.* from worker as w inner join title as t on w.worker_id = t.worker_ref_id where t.worker_title = 'Manager';

-- Q-25. Write an SQL query to fetch number (more than 1) of same titles in the ORG of different types.
select worker_title, count(*) as count from title group by worker_title having count > 1;

-- Q-26. Write an SQL query to show only odd rows from a table.
-- select * from worker where MOD (WORKER_ID, 2) != 0; 
select * from worker where MOD (WORKER_ID, 2) <> 0;

-- Q-27. Write an SQL query to show only even rows from a table. 
select * from worker where MOD (WORKER_ID, 2) = 0;

-- Q-28. Write an SQL query to clone a new table from another table.
CREATE TABLE worker_clone LIKE worker;
INSERT INTO worker_clone select * from worker;
select * from worker_clone;

-- Q-29. Write an SQL query to fetch intersecting records of two tables.
select worker.* from worker inner join worker_clone using(worker_id);

-- Q-30. Write an SQL query to show records from one table that another table does not have.
-- MINUS
select worker.* from worker left join worker_clone using(worker_id) WHERE worker_clone.worker_id is NULL;

-- Q-31. Write an SQL query to show the current date and time.
-- DUAL
select curdate();
select now();

-- Q-32. Write an SQL query to show the top n (say 5) records of a table order by descending salary.
select * from worker order by salary desc LIMIT 5;

-- Q-33. Write an SQL query to determine the nth (say n=5) highest salary from a table.
select * from worker order by salary desc LIMIT 4,1;

-- Q-34. Write an SQL query to determine the 5th highest salary without using LIMIT keyword.
select salary from worker w1
WHERE 4 = (
SELECT COUNT(DISTINCT (w2.salary))
from worker w2
where w2.salary >= w1.salary
);
 
-- Q-35. Write an SQL query to fetch the list of employees with the same salary.
select w1.* from worker w1, worker w2 where w1.salary = w2.salary and w1.worker_id != w2.worker_id;

-- Q-36. Write an SQL query to show the second highest salary from a table using sub-query.
select max(salary) from worker
where salary not in (select max(salary) from worker);

-- Q-37. Write an SQL query to show one row twice in results from a table.
select * from worker
UNION ALL
select * from worker ORDER BY worker_id;

-- Q-38. Write an SQL query to list worker_id who does not get bonus.
select worker_id from worker where worker_id not in (select worker_ref_id from bonus);

-- Q-39. Write an SQL query to fetch the first 50% records from a table.
select * from worker where worker_id <= ( select count(worker_id)/2 from worker);

-- Q-40. Write an SQL query to fetch the departments that have less than 4 people in it.
select department, count(department) as depCount from worker group by department having depCount < 4;

-- Q-41. Write an SQL query to show all departments along with the number of people in there.
select department, count(department) as depCount from worker group by department;

-- Q-42. Write an SQL query to show the last record from a table.
select * from worker where worker_id = (select max(worker_id) from worker);

-- Q-43. Write an SQL query to fetch the first row of a table.
select * from worker where worker_id = (select min(worker_id) from worker);

-- Q-44. Write an SQL query to fetch the last five records from a table.
(select * from worker order by worker_id desc limit 5) order by worker_id;

-- Q-45. Write an SQL query to print the name of employees having the highest salary in each department.
select w.department, w.first_name, w.salary from
 (select max(salary) as maxsal, department from worker group by department) temp
inner join worker w on temp.department = w.department and temp.maxsal = w.salary;

-- Q-46. Write an SQL query to fetch three max salaries from a table using co-related subquery
select distinct salary from worker w1
where 3 >= (select count(distinct salary) from worker w2 where w1.salary <= w2.salary) order by w1.salary desc;
-- DRY RUN AFTER REVISING THE CORELATED SUBQUERY CONCEPT FROM LEC-9.
select distinct salary from worker order by salary desc limit 3;

-- Q-47. Write an SQL query to fetch three min salaries from a table using co-related subquery
select distinct salary from worker w1
where 3 >= (select count(distinct salary) from worker w2 where w1.salary >= w2.salary) order by w1.salary desc;

-- Q-48. Write an SQL query to fetch nth max salaries from a table.
select distinct salary from worker w1
where n >= (select count(distinct salary) from worker w2 where w1.salary <= w2.salary) order by w1.salary desc;

-- Q-49. Write an SQL query to fetch departments along with the total salaries paid for each of them.
select department , sum(salary) as depSal from worker group by department order by depSal desc;

-- Q-50. Write an SQL query to fetch the names of workers who earn the highest salary.
select first_name, salary from worker where salary = (select max(Salary) from worker);

--Q-51. Write a query to find duplicate rows in a table. 
SELECT column1, column2, COUNT(*) AS count 
FROM your_table 
GROUP BY column1, column2 
HAVING COUNT(*) > 1;

--Q-52. Explain the difference between INNER JOIN and OUTER JOIN with examples. 
--INNER JOIN
 --Returns only matching records from both tables.
 SELECT e.name, d.department_name
 FROM employees e
 INNER JOIN departments d ON e.department_id = d.department_id; 

--LEFT OUTER JOIN: 
--Returns all records from the left table, and matching records from the right table. If no match, NULL is returned.
 SELECT e.name, d.department_name
 FROM employees e
 LEFT JOIN departments d ON e.department_id = d.department_id; 

--RIGHT OUTER JOIN: 
--Returns all records from the right table, and matching records from the left. 
 SELECT e.name, d.department_name
 FROM employees e
 RIGHT JOIN departments d ON e.department_id = d.department_id; 

--FULL OUTER JOIN: 

--Returns all records from both tables, matching where possible.
-- Key Difference: 
--INNER JOIN = intersection (matched data only)
--OUTER JOIN = union + NULLs (matched + unmatched data)

--Q.53. Write a query to find employees earning more than their managers. 
-- Assume the table employees has:
-- emp_id, name, salary, manager_id 
SELECT e.name AS employee_name, e.salary, m.name AS manager_name, m.salary AS manager_salary 
FROM employees e 
JOIN employees m ON e.manager_id = m.emp_id 
WHERE e.salary > m.salary; 

--Q.54. Explain the difference between UNION and UNION ALL. 
 Feature          UNION                  UNION ALL
 Duplicates       Removes duplicates     Keeps all rows, including duplicates 
 Performace       Slower (because of sorting) Faster (no de-duplication)
 Use Case         When you want distinct rows When duplicates are meaningful 

Example: 
SELECT city FROM customers 
UNION 
SELECT city FROM vendors; 
Output:- Returns a unique list of cities. 
 
SELECT city FROM customers 
UNION ALL 
SELECT city FROM vendors; 
Output:- Returns all cities, including duplicates. 

--Q.54. How do you use a CASE statement in SQL? Provide an example. 
--CASE lets you write conditional logic in SQL (similar to IF/ELSE).
 SELECT name, salary, 
 CASE 
 WHEN salary >= 100000 THEN 'High'
 WHEN salary >= 50000 THEN 'Medium'
 ELSE 'Low' 
 END AS salary_category 
 FROM employees;

--Q.55. What is a CTE (Common Table Expression), and how is it used? 
 --Definition:
 --A CTE (Common Table Expression) is a temporary, named result set that you can reference within a SQL query.
 --It improves readability and simplifies complex subqueries or recursive logic. 
--Syntax: 
WITH cte_name AS ( 
SELECT ... 
) 
SELECT * FROM cte_name; 

--Example – Filter top-paid employees using CTE: 
WITH HighEarners AS ( 
SELECT emp_id, name, salary 
FROM employees 
WHERE salary > 100000 
) 
SELECT * FROM HighEarners; 

--Q.56. Explain the difference between DELETE and TRUNCATE commands.
Feature             DELETE                                            TRUNCATE
Removes rows        Yes (can use WHERE condition)                     Yes (removes all rows)
WHERE supported?    Yes                                               No
Logging             Logs each deleted row (slower)                    Minimal logging (faster) 
Rollback            Can be rolled back (if within transaction)        Can be rolled back (in some RDBMS) 
Identity reset      Retains identity                                  Resets identity (in most DBs)
Use case            Partial deletion or audit trail needed            Full data wipe without audit needed

--Q.57. How do you optimize SQL queries for better performance? 
Here are key SQL optimization techniques: 
1. Use SELECT only required columns -- Bad 
SELECT * FROM orders; 
-- Good 
SELECT order_id, customer_id FROM orders; 
2. Create proper indexes 
• Index frequently used columns in JOIN, WHERE, ORDER BY. 
3. Avoid functions on indexed columns 
 -- Slower (cannot use index) 
WHERE YEAR(order_date) = 2024 
 -- Better 
WHERE order_date BETWEEN '2024-01-01' AND '2024-12-31' 
4. Use EXISTS instead of IN (for subqueries) 
 -- Prefer EXISTS (better for large datasets) 
SELECT name FROM customers c 
WHERE EXISTS ( 
SELECT 1 FROM orders o WHERE o.customer_id = c.customer_id 
); 
5. Avoid unnecessary joins or nested subqueries 
6. Use appropriate data types and avoid implicit conversions 
7. Analyze execution plans (EXPLAIN or EXPLAIN ANALYZE)
