#include "movie.h"

//Essentially a linear linked list holding a bunch of movies

struct info{
	info *next;
	movie data;
};

class list{
	public:
		list();
		~list();
		int add(movie &m);
		int copy(info * m);
		int display();
		int remove();
	private:
		info *head;
		//int add(movie &m, info *& head);
		
};
