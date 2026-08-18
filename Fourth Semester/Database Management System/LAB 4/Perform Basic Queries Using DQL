-------------------------------
--DQL COMMAND
-------------------------------

--4.1

select ProductCode from product

--4.2 Nested Query
SELECT Name,Price
FROM Product
WHERE ProductCategoryRef_Id IN
	(
		SELECT CategoryId
		FROM ProductCategory
		WHERE CategoryName = 'Mobiles'
 	);

--4.3 Aggregate functions
SELECT MAX(Price) AS MaxPrice, MIN(Price) AS MinPrice, AVG(Price) AvgPrice
FROM Product

--4.4 Grouping

SELECT ProductCategoryRef_Id AS CategoryId,
 COUNT (*) AS ItemCount,
 SUM(Price) AS TotalPrice
FROM Product
GROUP BY ProductCategoryRef_Id;

--4.5 Having Clause

SELECT ProductCategoryRef_Id AS CategoryId,
 COUNT(*) AS ItemCount,
 SUM(Price) AS TotalPrice
FROM Product
GROUP BY ProductCategoryRef_Id
HAVING COUNT(*)>1;
