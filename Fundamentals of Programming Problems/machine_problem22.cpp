#include <iostream>
using namespace std;

int main() {
	int assign, seatwork, quiz, exam, grade, gen_av;
	
	cout << "Enter the assignment grade: ";
	cin >> assign;
	cout << "Enter the seatwork grade: ";
	cin >> seatwork;
	cout << "Enter the quiz grade: ";
	cin >> quiz;
	cout << "Enter the exam grade: ";
	cin >> exam;
	
	grade = (assign*0.10) + (seatwork*0.20) + (quiz*0.30) + (exam *0.40);
	switch(grade){
		case 97 ... 100:
			cout << "Equivalent grade is 1.00 \nExcellent";
			break;
		case 94 ... 96:
			cout << "Equivalent grade is 1.25 \nExcellent";
			break;
		case 91 ... 93:
			cout << "Equivalent grade is 1.50 \nVery Good";
			break;
		case 88 ... 90:
			cout << "Equivalent grade is 1.75 \nVery Good";
			break;
		case 85 ... 87:
			cout << "Equivalent grade is 2.00 \nGood";
			break;
		case 82 ... 84:
			cout << "Equivalent grade is 2.20 \nGood";
			break;
		case 79 ... 81:
			cout << "Equivalent grade is 2.50 \nSatisfactory";
			break;
		case 76 ... 78:
			cout << "Equivalent grade is 2.75 \nFair";
			break;
		case 75:
			cout << "Equivalent grade is 3.00 \nPassed";
			break;
		default:
			cout << "Equivalent grade is 5.00 \nFailed";
			break;
	}
		
	
	
	
	return 0;
}
