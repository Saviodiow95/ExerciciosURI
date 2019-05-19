SELECT movies.id, movies.name
FROM movies inner join genres on movies.id_genres = genres.id
WHERE genres.description = 'Action'