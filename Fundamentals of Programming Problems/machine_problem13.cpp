#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3, l_num;
	
	cout << "Enter three unique numbers: ";
	cin >> num1>> num2>> num3;
	
	if (num1 < num2 && num1 < num3) {
		l_num = num1;
		cout << l_num;
	}
	else if (num2 < num1 && num2 < num3) {
		l_num = num2;
		cout << l_num;
	}
	else if (num3 < num1 && num3 < num2) {
		l_num = num3;
		cout << l_num;
	}
	return 0;
	
	
}
