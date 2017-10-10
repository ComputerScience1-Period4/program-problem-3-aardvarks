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
	int x;
	cout << "Choose a three digit number." << endl;
	cin >> x;
	cout << "Nice Choice" << endl;
	int A = x / 100 ;
	int B = x % 100 / 10 ;
	int C = x % 10 ;

	if ((A > B) && ( B > C)) {
		cout << "descending" << endl;
	}
	else if ((A < B) && (B < C)) {
		cout << "acscending" << endl;
	}
	else {
		cout << "neither" << endl;
	}
	pause();
}
