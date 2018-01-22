#include "movie.h"

using namespace std;


int main(){
	movie tempMov;
	char choice = 'Z';
	do{
		menu();
		choice = userChooses();
		if(choice == 'A'){
			cout << "Yay, add!" << endl;
		}
		if(choice == 'D'){
			cout << "Displaying something cool" << endl;
		}
		if(choice == 'C'){
			cout << "Sometimes a change will do you good." << endl;
		}


	}while(choice != 'E');	
	exit(0);
}


void menu(){
	cout << "Welcome to MovieList!" << endl;
	cout << "For the following options, enter the corresponding letter to continue" << endl;
	cout << "To add a movie, enter 'A'" << endl;
	cout << "To display a movie, enter 'D'" << endl;
	cout << "To edit a movie, enter 'C' " << endl;
	cout << "To exit program, enter 'E' " << endl;
}


char userChooses(){
	char choice;
	cout << "What is your choice from the menu?" << endl;
	cin >>choice;	
	choice = toupper(choice);
	while(choice != 'A'&& choice != 'D' && choice != 'C' && choice != 'E'){
		cout << "Please enter a valid choice:" << endl;
		cin >> choice;
		cin.ignore();
		choice = toupper(choice);
	}

	return choice; 
}


