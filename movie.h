#include <iostream>
#include <cctype> 
#include <cstring>
#include <cstdlib>

//File holds the movie class, its function and data.



class movie{
	public:
		movie();
		~movie();
		int add(char *t, char *y);
		int copy(movie & m);
		void display();
		int display(movie &m);
	protected:
		char * title;
		char *year; 
	//	int rating; /// scale of 1-5 

};
