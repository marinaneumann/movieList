MovieList 
by Marina Neumann

This program practices using C++ implementation of data structures and classes to establish a database of movies. It will use external data file as well as client interactions to forulate the organization of movies. 

Data Structure: 
A BST tree serving as a directory of all movies, where each node in the tree is a letter/number in the alphabet. 
Each tree node has a list node which is all the movies that have are sorted under that letter/number. 
Each list node has a movie with a certain amount of details pertaining to that specific movie. 

Design Considerations: 
-Same title movie issue--- distinguished by details, like release date. (Potential distinguished actors? For example, Good Morning Vietnam would list Robin Williams as "starring". Could potentially have capabilities to organize movies by who has starred in them? 
-Read In file decisions, amount of detail for each movie. Enough to distinguish? 
-If the movie starts with a "The" cause that'll effect searching, potential creating repeats. Have safety net to check that same two movies aren't created? 

Extra options:
-Favorites Organizer/Category Sorting
-Random selection to decide which movie to watch next. 
-Directory wil hold all movies, specifiying if watched, and if watched what they were rated/ is it belong in favorite category. 

This ADT will have some client side application but fundamentally working on building data structures and exploring this design idea to applied later (probably in Java & Angular, also maximizing backend and frontend w/ app/website application)



Building process:

1) Movie class and functionality
2) List class and functionality
3) Tree class and functionality
4) Read In file functionality
