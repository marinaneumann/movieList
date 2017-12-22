//
#include "movie.h"

using namespace std;

movie:: movie(){
	title = NULL;
	year = NULL;
}

movie:: ~movie(){
	delete title;
	delete year;
	title = year = NULL;
}


int movie::add(char *t, char *y){
	this->title = new char[strlen(t)+1];
	strcpy(this->title, t);
	this->year = new char[strlen(y)+1];
	strcpy(this->year, y);	
	if(this->title != NULL){
		return 1;	
	}

	return 0;
}


int movie::copy(movie &m){
	this->title = new char[strlen(m.title)+1];
	strcpy(this->title, m.title);
	this->year = new char[strlen(m.year)+1];
	strcpy(this->year, m.year);
	if(this->title!= NULL){
		return 1;
	}

	return 0;
}


void movie::display(){
	cout << "Title: " << title << endl;
	cout << "Year: " << year << endl;
}

int movie::display(movie &m){
	if(m.title == NULL){
		return 0;
	}
	cout << "Title:" << m.title << endl;
	cout << "Year: " << m.year << endl;

	return 1;
}


