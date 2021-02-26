select p.name
from products as p
inner join providers as pr on p.id_providers=pr.id
where (p.amount between 10 and 20)
and
pr.name like 'P%';