(select concat('Podium: ',team)as name
from league
order by position
limit 3)
union all
(select concat('Demoted: ',team)as name
from league
where position>any(select count(*)-2 from league))