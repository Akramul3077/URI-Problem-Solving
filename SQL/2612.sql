select movies.id,movies.name
from movies
inner join genres on movies.id_genres=genres.id
where genres.description='Action'
and movies.id in(select distinct movies_actors.id_movies
from movies_actors
inner join actors on actors.id=movies_actors.id_actors
where actors.name='Marcelo Silva' or actors.name='Miguel Silva');