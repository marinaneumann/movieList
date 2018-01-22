#include "movie.h"


struct info{
	info *next;
	movie data;
};

class list{
	public:
		list();
		~list();
	private:
		info *head;
};
