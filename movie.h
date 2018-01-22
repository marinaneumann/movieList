#include <iostream>
#include <cctype> 
#include <cstring>
#include <cstdlib>

//File holds the movie class, its function and data.



class movie{
	public:
		movie();
		~movie();
		int add(char *t, char *y, char stat, int rate);
		int copy(movie & m);
		void display();
		int display(movie &m);
		void remove();
		void remove(movie &m);
		int editstatus(movie &m, char *t, char *y,char stat,int rate);
		int editstatus(char *t, char *y, char stat, int rate);

	protected:
		char * title;
		char *year; 
		char status; // W for watched, U for unwatched
		int rating; //0 to 5, 0 is unrated
	//	int rating; /// scale of 1-5 

};
