select c.name,r.rentals_date
from customers as c
inner join rentals as r on c.id=r.id_customers
where r.rentals_date>='2016-09-01' and r.rentals_date<='2016-09-30'