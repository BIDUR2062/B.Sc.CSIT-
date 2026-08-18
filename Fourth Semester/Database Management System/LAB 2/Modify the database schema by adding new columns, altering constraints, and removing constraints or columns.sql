--1. Drop Country column from Address relation
ALTER TABLE Address
DROP COLUMN CountryName

--2. Add a column ContryRefId with a foreign key constraint to Country relation.
CREATE TABLE Country
(
	CountryId INT PRIMARY KEY,
	CountryName VARCHAR2 (100) NOT NULL
)

ALTER TABLE Address
ADD ContryRefId INT CONSTRAINT Address_ContryRefId_FK REFERENCES Country(CountryId)

--3.	Add new column BillingAddressRefId to PurchaseOrder relation and make it foreign key of Address relation.
ALTER TABLE PurchaseOrder
ADD BillingAddressRefId INT

ALTER TABLE PurchaseOrder
ADD FOREIGN KEY(BillingAddressRefId) REFERENCES Address(AddressId)

--4. Modify column Price with default value to Product table.
ALTER TABLE Product
   MODIFY Price DECIMAL(18,4) default 1

--5. Remove unique constraint and add again.

SELECT *
  FROM user_constraints
 WHERE table_name = 'PRODUCT' 

--DROP CONSTRAINT
ALTER TABLE Product
DROP CONSTRAINT SYS_C007112
ALTER TABLE Product ADD CONSTRAINT Product_ProductCode_Un UNIQUE (ProductCode)



