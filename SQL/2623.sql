select p.name,c.name
from products as p
inner join categories as c on p.id_categories=c.id
where p.amount>100
and
p.id_categories in(1,2,3,6,9);