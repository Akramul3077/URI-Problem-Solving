select p.name,pr.name,p.price
from products as p
inner join providers as pr on p.id_providers=pr.id
inner join categories as c on p.id_categories=c.id
where price>1000 and c.name='Super Luxury';