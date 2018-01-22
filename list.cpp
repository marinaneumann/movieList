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

/*
int list::add(info & l,movie &m){
	if(l.head){
		l.head = new node;
		l.head->next = NULL;
		data.copy(m);	
		return 1;
	}
	if( data.titleCompare(m)){
		info * temp = head->next;
		return add(temp, m);	
	}
	info * temp = new node; 
	temp->data.copy(m);
	
	
}

*/
