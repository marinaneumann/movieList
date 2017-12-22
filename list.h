#include "movie.h"


struct info{
	node *next;
	movie info;
}

class list{
	public:
		list();
		~list();
	private:
		info *head;
}
