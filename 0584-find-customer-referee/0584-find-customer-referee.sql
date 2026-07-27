# Write your MySQL query statement below
SELECT c.name 
FROM Customer AS c
WHERE referee_id IS NULL OR referee_id != 2