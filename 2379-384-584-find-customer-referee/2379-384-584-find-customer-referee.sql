# Write your MySQL query statement below
-- SELECT name FROM Customer WHERE referee_id != 2 OR referee_id = null;
SELECT name FROM Customer WHERE referee_id IS NULL OR referee_id!=2;