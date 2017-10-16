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
	for (int i = 1; i <= 30; i++) {
cout << "Choose a three digit number." << endl;
	cin >> x;
	cout << "Nice Choice Loser" << endl;
	int A = x / 100;
	int B = x % 100 / 10;
	int C = x % 10;
	//desending variables
	if ((A > B) && (B > C)) {
		cout << x << " is descending" << endl;
	}
	//acending variables
	else if ((A < B) && (B < C)) {
		cout << x << " is acscending" << endl;
	}
	//neither variable
	else {
		cout << x << " is neither" << endl;

	}
	
	}
	pause();
}
