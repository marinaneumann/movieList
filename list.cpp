#include "list.h"


list::list(){
	head = NULL;
}

list::~list(){
		info *current = NULL;
	while(head != NULL){
		current = head->next;	
		delete head; 
		head = current; 
		current = NULL; 
	}

	delete head;
	delete current;
	head = current = NULL;
}

