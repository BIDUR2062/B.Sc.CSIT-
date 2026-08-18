--COMMIT/ROLLBACK
-----------------
CREATE OR REPLACE PROCEDURE SPTest
AS
BEGIN
   -- We create a savepoint here.
  SET TRANSACTION READ WRITE NAME 'sp_sptest';
 
insert into ProductCategory
values(6, 'test1');

insert into Product
values(3,'Samsung Mobile', 12,50, 10000,5,sysdate,'SM1234');
COMMIT;
 
-- If any exception occurs
EXCEPTION
   WHEN OTHERS THEN
      -- We roll back to the savepoint.
      ROLLBACK;
        -- And of course we raise again,
      -- since we don't want to hide the error.
      -- Not raising here is an error!
       RAISE;
END;

--EXEC SP
begin
SPTest;
end