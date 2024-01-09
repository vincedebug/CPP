#include <iostream>
using namespace std;

int main() {
	int grade;
	
	cout << "Enter Grade: ";
	cin >> grade;
	
	switch(grade) {
		case 98 ... 100:
			cout << "1.0";
			break;
		case 95 ... 97:
			cout << "1.25";
			break;
		case 92 ... 94:
			cout << "1.5";
			break;
		case 89 ... 91:
			cout << "1.75";
			break;
		case 86 ... 88:
			cout << "2.0";
			break;
		case 83 ... 85:
			cout << "2.25";
			break;
		case 80 ... 82:
			cout << "2.5";
			break;
		case 77 ... 79:
			cout << "2.75";
			break;
		case 75 ... 76:
			cout << "3.0";
			break;
		default:
			if (grade <=74 ){
				cout << "5.0";
			}
			
	} 
	return 0;
	
}
