-- =====================================
-- ProductCategory
-- =====================================

INSERT INTO ProductCategory
VALUES (1, 'Mobile');
INSERT INTO ProductCategory
VALUES (2, 'Laptop');
INSERT INTO ProductCategory
VALUES (3, 'Shoes');
INSERT INTO ProductCategory
VALUES (4, 'Electronics');
INSERT INTO ProductCategory
VALUES (5, 'Furniture');

-- =====================================
-- Country
-- (Required because Address.CountryRef_Id
-- is a foreign key)
-- =====================================

INSERT INTO Country
VALUES (1, 'Nepal');

INSERT INTO Country
VALUES (2, 'India');

INSERT INTO Country
VALUES (3, 'China');

INSERT INTO Country
VALUES (4, 'Japan');

INSERT INTO Country
VALUES (5, 'United States');

-- =====================================
-- Address
-- (CountryName removed, CountryRef_Id added)
-- =====================================

INSERT INTO Address
VALUES (1, 'Kathmandu', 'New Baneshwor', 1);

INSERT INTO Address
VALUES (2, 'Mumbai', 'Bandra West', 2);

INSERT INTO Address
VALUES (3, 'Beijing', 'Chaoyang District', 3);

INSERT INTO Address
VALUES (4, 'Tokyo', 'Shibuya', 4);

INSERT INTO Address
VALUES (5, 'New York', '5th Avenue', 5);

-- =====================================
-- Customer
-- =====================================

INSERT INTO Customer
VALUES (1, 1, 'Ram Sharma', 'New Baneshwor', 'ram@gmail.com', '9801000001');

INSERT INTO Customer
VALUES (2, 2, 'Sita Rai', 'Bandra West', 'sita@gmail.com', '9801000002');

INSERT INTO Customer
VALUES (3, 3, 'Hari Karki', 'Chaoyang District', 'hari@gmail.com', '9801000003');

INSERT INTO Customer
VALUES (4, 4, 'Gita Thapa', 'Shibuya', 'gita@gmail.com', '9801000004');

INSERT INTO Customer
VALUES (5, 5, 'Bikash Khanal', '5th Avenue', 'bikash@gmail.com', '9801000005');
-- =====================================
-- Product
-- =====================================

INSERT INTO Product
VALUES (1, 'Samsung Galaxy S24', 20, 500, 85000, 1, SYSDATE, 'SM001');

INSERT INTO Product
VALUES (2, 'Apple iPhone 15', 15, 1000, 150000, 1, SYSDATE, 'IP002');

INSERT INTO Product
VALUES (3, 'Dell Inspiron', 10, 1500, 95000, 2, SYSDATE, 'DL003');

INSERT INTO Product
VALUES (4, 'Nike Air Max', 30, 200, 12000, 3, SYSDATE, 'NK004');

INSERT INTO Product
VALUES (5, 'Office Chair', 12, 500, 8500, 5, SYSDATE, 'OC005');
-- =====================================
-- PurchaseOrder
-- (BillingAddressRef_Id added)
-- =====================================

INSERT INTO PurchaseOrder
VALUES (1, 1, 1, SYSDATE, 85000, 1, 1);

INSERT INTO PurchaseOrder
VALUES (2, 2, 2, SYSDATE, 300000, 2, 2);

INSERT INTO PurchaseOrder
VALUES (3, 3, 3, SYSDATE, 95000, 1, 3);

INSERT INTO PurchaseOrder
VALUES (4, 4, 4, SYSDATE, 24000, 2, 4);

INSERT INTO PurchaseOrder
VALUES (5, 5, 5, SYSDATE, 25500, 3, 5);

--UPDATE COMMAND
-----------------
update productcategory
set CategoryName='Mobiles'
Where categoryID=1

--DELETE COMMAND
delete from Address;

DELETE FROM PurchaseOrder
WHERE BillingAddressRefId = 1;

DELETE FROM Customer
WHERE AddressRefId = 1;

DELETE FROM Address
WHERE AddressId = 1;
