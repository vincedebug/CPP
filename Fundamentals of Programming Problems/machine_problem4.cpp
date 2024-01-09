#include <iostream>
using namespace std;

int main() {
	int grade;
	
	cout << "enter grade: ";
	cin >> grade;
	
	if (grade < 100) {
		cout << "The new grade is " << grade+1;
	}
	else {
		cout << "The grade is " << grade;
	}
	return 0;
}
