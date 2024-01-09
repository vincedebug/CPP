#include <iostream>
using namespace std;

int main() {
	int age, age_b;
	
	cout << "Enter your age: ";
	cin >> age;
	
	if (age >= 18) {
		cout << "YOU are old enough to drive";
	}
	else {
		age_b = 18 - age;
		cout << "You need to wait "<< age_b << " years to be able to drive";
	}
}
