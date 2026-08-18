--5.1 Inner Join
SELECT P.Name,PC.CategoryName
FROM Product P
INNER JOIN ProductCategory PC
ON P.ProductCategoryRef_Id=PC.CategoryId

--5.2 Left Outer join
SELECT P.*, PC.CategoryName
FROM Product P
LEFT JOIN ProductCategory PC
ON P.ProductCategoryRef_Id=PC.CategoryId

--5.3 Right outer join
SELECT P.Name, PC.CategoryName
FROM Product P
RIGHT JOIN ProductCategory PC
ON P.ProductCategoryRef_Id=PC.CategoryId


--5.4 Full JOIN
SELECT P.Name, PC.CategoryName
FROM Product P
FULL JOIN ProductCategory PC
ON P.ProductCategoryRef_Id=PC.CategoryId

