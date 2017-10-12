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
	int y = 0;
	while (y < 30) {// forces code to continue 30 times
	int x;
	cout << "Choose a three digit number." << endl;
	cin >> x;
	cout << "Nice Choice Loser" << endl;
	int A = x / 100 ; //first equation to get first number
	int B = x % 100 / 10 ; //second equation to get 2ed number
	int C = x % 10 ; //3ed equation to get third number.
	cout << endl;
	y = y + 1;
	if ((A > B) && ( B > C)) {
		cout << x << " is descending" << endl;
		cout << endl;
	}
	else if ((A < B) && (B < C)) {
		cout << x << " is acscending" << endl;
		cout << endl;
	}
	else {
		cout << x << " is neither" << endl;
		cout << endl;
	}
	pause();
}
