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
for (int i = 1; i <= 30; i++) { // makes a loop to make the user to enter in th number 30 times 
 		cout << i << endl;
 		cout << "Choose a 3 Digit #" << endl;
 		cin >> x;
 		int A = x / 100;
 		int B = x % 100 / 10;
 		int C = x % 10;
 		cout << "Nice Choice " << x << endl;// be nicer to user
 		if ((A > B) && (B > C)) {
 		cout << x << " is Decending" << endl;
 		}
 		else if ((A < B) && (B < C)) {
 		cout << x <<" is Acending" << endl;
 		}
		else { 
		cout << x << " is Neither" << endl;
		}
	}
	pause();
}
