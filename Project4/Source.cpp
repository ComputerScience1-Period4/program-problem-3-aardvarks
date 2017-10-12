/*
Matt Price, Marcus Basta and Jarrett Reed - October 5th 1st Period
Three_Digit_Ascend_Descend_Selection
Coding what we did last class
*/
//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std; //*
//Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	int choices = 30
	
	while (choices < 30){
	int x;
	cout << "Choose a three digit number." << endl;
	cin >> x;
	cout << "Nice Choice Loser" << endl;
	int A = x / 100 ;
	int B = x % 100 / 10 ;
	int C = x % 10 ;

	if ((A > B) && ( B > C)) {
		cout << x << " is descending" << endl;
		choices ++
	}
	else if ((A < B) && (B < C)) {
		cout << x << "is acscending" << endl;
		choices ++
	}
	else {
		cout << x << "is neither" << endl;
		choices ++
	}
	
	}
	pause();
}
