#include <iostream>
using namespace std;

int main() {
	
	int num1,num2,num3;
	
	cout << "Enter three unique numbers: ";
	cin >> num1>> num2>> num3;
	
	if (num1 < num2 && num2 < num3) {
		cout << num1 << " " << num2 << " " << num3;
	}
	else if (num2 < num1 && num1 < num3) {
		cout << num2 << " " << num1 << " " << num3;
	}
	else if (num3 < num2 && num2 < num1 ) {
		cout << num3 << " " << num2 << " " << num1;
	}
	return 0;
}
