select c.name,o.id
from orders as o
inner join customers as c on o.id_customers=c.id
where orders_date>='2016-01-01' and orders_date<='2016-06-30'