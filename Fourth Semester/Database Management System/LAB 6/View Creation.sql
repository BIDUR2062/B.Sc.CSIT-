--View
-------------
create view vw_CustomerOrder AS
SELECT
    c.name,
    SUM(p.Price) as TotalPrice,
    Count(*) OrderCount
FROM
    PurchaseOrder po
    inner join Customer c on c.CustomerId = po.CUSTOMERREFID
    inner join Product p on p.ProductId = po.ProductRefiD
GROUP BY c.name;

select
    *
from
    vw_CustomerOrder