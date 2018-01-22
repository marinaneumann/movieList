//
#include "movie.h"

using namespace std;

movie:: movie(){
	title = NULL;
	year = NULL;
	rating = 0;
}

movie:: ~movie(){
	delete title;
	delete year;
	title = year = NULL;
}


int movie::add(char *t, char *y, char stat, int rate){
	this->title = new char[strlen(t)+1];
	strcpy(this->title, t);
	this->year = new char[strlen(y)+1];
	strcpy(this->year, y);	
	if(this->title != NULL){
		return 1;	
	}
	this->status = stat;
	this->rating = rate;

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
	this->status = m.status;
	this->rating = m.rating;

	return 0;
}


void movie::display(){
	cout << "Title: " << title << endl;
	cout << "Year: " << year << endl;
	if(status == 'W'){
		cout << "Status: Watched" << endl;
	}else{
		cout << "Status: Unwatched" << endl;
	}
	cout << "Rating:" << rating << endl;
}

int movie::display(movie &m){
	if(m.title == NULL){
		return 0;
	}
	cout << "Title:" << m.title << endl;
	cout << "Year: " << m.year << endl;
	if(m.status == 'W'){
		cout << "Status: Watched" << endl;
	}else{
		cout << "Status: Unwatched" << endl;
	}
	cout << "Rating:" << m.rating << endl;
	return 1;
}

void movie::remove(){
	delete title;
	delete year;
	title = year = NULL;
} 

void movie::remove(movie &m){
	delete m.title;
	delete m.year;
	m.title = m.year = NULL;
}

//Function allows for user to change movie status and rate it accordingly. 
int movie::editstatus(movie &m, char *t, char *y, char stat, int rate){
	if(strcmp(m.title, t) !=0){
		return 0;
	}
	if(strcmp(m.year, y) != 0){
		return 0;
	}
	m.status = status;
	m.rating = rate;
	return 1;
	
} 


int movie::editstatus(char *t, char *y, char stat, int rate){
	if((strcmp(this->title, t)!= 0) && (strcmp(this->year, y)!=0)){
		return 0;
	}
	this->status = stat;
	this->rating = rate;
	return 1;
}

int movie::titleCompare(movie &m){
	if(!m.title == NULL){
		return -99;
	}
	if(!m.year == NULL){
		return -99;
	}
	if(this.title < m.title){
		return 0; 	
	}else if(strcmp(this.title, m.title)==0){
		if(this.year < m.year){
			return 0;
		}
		return 1;
	}
	
	return 1; 
}
