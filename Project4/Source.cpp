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
	
	for (int i = 1; i<=30; i++) {
		
	
 		cout << "Choose a three digit number." << endl; //By looping the program, it makes the program more usful because it can be used more than once
		cin >> x;
		cout << "Nice Choice Loser" << endl; //uummmmmmm may wanna be nicer to your user "nice choice loser" is kiiiinnnnda mean LOL
		int A = x / 100 ;
		int B = x % 100 / 10 ;
		int C = x % 10 ;
	
	
//program is good from this point, once the loop is added then its good.
		
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
