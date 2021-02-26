select movies.id,movies.name
from movies,genres
where movies.id_genres=genres.id and genres.description='Action';