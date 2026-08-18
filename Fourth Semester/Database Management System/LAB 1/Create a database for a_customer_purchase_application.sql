--Description: The Customer Purchase Application (CPA) schema consists of several 
--entities with specific purposes: ProductCategory stores product category details, 
--Product stores product information linked to a category, Address stores shipping and 
--customer addresses, Customer stores customer details linked to an address, and 
--PurchaseOrder stores customer-specific product order information. The relationships 
--between these entities include One-to-Many (e.g., one ProductCategory can have 
--many Products, one Customer can have many PurchaseOrders), One-to-One (e.g., one 
--Customer is linked to one Address), and potential Many-to-Many (e.g., customers 
--ordering multiple products). Entities have constraints like NOT NULL for required 
--fields, UNIQUE for unique values (e.g., ProductCode), CHECK for valid ranges (e.g., 
--Price), and FOREIGN KEY to enforce relationships between tables.  

--Schema:  
--ProductCategory(CategoryId, CategoryName)  
--Product (ProductId, Name, Quantity, Discount, Price, ProductCategoryRef_Id, CreatedDate, ProductCode)  
--Column constraints: NOT NULL on Name, CHECK on Price, Foreign key on ProductCategoryRef_Id, UNIQUE on ProductCode)  
--Address (AddressId, City, Street, CountryName)  
--Customer (CustomerId, AddressRef_Id, Name, Address, EmailAddress, PhoneNumber)  
--PurchaseOrder (PurchaseOrderId, ProductRef_Id, CustomerRef_Id, OrderDate, PaymentTotal, OrderQuantity) 

--SQL Commands
--ProductCategory(CategoryId, CategoryName)
CREATE TABLE ProductCategory(
CategoryId INT,
CategoryName VARCHAR(200) NOT NULL,
PRIMARY KEY (CategoryId)
)

--Product (ProductId, Name, Quantity, Discount, Price, ProductCategoryRef_Id, CreatedDate, ProductCode)
CREATE TABLE Product
(
ProductId INT,
Name VARCHAR2 (200) NOT NULL,
Quantity INT DEFAULT 1,
Discount NUMBER DEFAULT 0.0,
Price NUMBER CHECK (price>0),
ProductCategoryRef_Id INT NOT NULL,
CreatedDate DATE NOT NULL,
ProductCode VARCHAR2 (200) NOT NULL UNIQUE,
PRIMARY KEY(ProductId),
FOREIGN KEY(ProductCategoryRef_Id) REFERENCES
ProductCategory (CategoryId)
)

--Address (AddressId, City, Street, CountryName)
CREATE TABLE Address
(
AddressId INT,
City VARCHAR (200) NOT NULL,
Street VARCHAR2 (200) NOT NULL,
CountryName VARCHAR2 (200) NOT NULL,
PRIMARY KEY(AddressId)
)

--Customer (CustomerId, AddressRefId, Name, Address, EmailAddress, PhoneNumber)
CREATE TABLE Customer
(
CustomerId INT,
AddressRefId INT REFERENCES Address(AddressId),
Name VARCHAR2 (200) NOT NULL,
Address VARCHAR2 (200),
EmailAddress VARCHAR2 (200) NOT NULL UNIQUE,
PhoneNumber varchar(200)
PRIMARY KEY(CustomerId)
)

--PurchaseOrder (PurchaseOrderId, ProductRefId, CustomerRefId, OrderDate,PaymentTotal, OrderQuantity)
CREATE TABLE PurchaseOrder
(
PurchaseOrderId INT PRIMARY KEY,
CustomerRefId INT REFERENCES Customer(CustomerId),
ProductRefId INT REFERENCES Product(ProductId),
OrderDate DATE NOT NULL,
PaymentTotal DECIMAL(18,3) NOT NULL,
OrderQuantity INT DEFAULT 1
)
