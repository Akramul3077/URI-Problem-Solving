select l.name as name,ROUND(l.omega*1.618,3) "The N Factor"
from life_registry as l
inner join dimensions as d on l.dimensions_id=d.id
where d.name in('C875','C774') and l.name like 'Richard%';