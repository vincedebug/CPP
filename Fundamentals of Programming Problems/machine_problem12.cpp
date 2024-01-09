#include <iostream>
using namespace std;

int main() {
	int choice, f_num, s_num, answer;
	cout << " 1. Add Two Numbers \n 2. Subtract Two Numbers \n 3. Multiply Two Numbers \n 4. Divide Two Number \n 5. Exit \n ENTER YOUR CHOICE: ";
	cin >> choice;
	
	cout << " Enter the first number: ";
	cin >> f_num;
	cout << " Enter the second number: ";
	cin >> s_num;
		
	if (choice == 5) {
		cout << endl;
	}
	
	else if (choice == 1) {		
		answer = f_num + s_num;
		cout << " The Sum is " << answer; 
	}
	else if (choice == 2) {
		answer = f_num - s_num;
		cout << " The Difference is " << answer;
	}
	else if (choice == 3) {
		answer = f_num * s_num;
		cout << " The Product is " << answer;
	}
	else if (choice == 4 ) {
		answer =  f_num * s_num;
		cout << " The Quotient is " << answer;
	}
	
}
