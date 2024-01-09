#include <iostream> 
using namespace std;

int main() {
	int age;
	
	cout << "Enter the age: ";
	cin >> age;
	
	switch(age) {
		case 40 ... 59:
			cout << "Senior Citizen";
			break;
		case 20 ... 39:
			cout << "Youth";
			break;
		case 13 ... 19:
			cout << "Teenage";
			break;
		case 0 ... 12:
			cout << "Kids";
			break;
		default:
			if (age >= 60) {
				cout << "Senior Citizen";
			}
			else {
				cout << "invalid input";
			}
			break;
	}
			
	return 0;
}
