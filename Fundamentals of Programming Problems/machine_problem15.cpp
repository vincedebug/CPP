#include <iostream> 
using namespace std;

int main() {
	
	int num1,num2,num3, num_1, num_2, num_3;
	
	cout << "Enter three unique numbers: ";
	cin >> num1>> num2>> num3;
	
	
	if (num1 < num2 && num2 < num3) {
		num_1 = num1;
		num_2 = num2;
		num_3 = num3;
		cout << num_3 - num_1;
	}
	else if (num2 < num1 && num1 < num3) {
		num_1 = num2;
		num_2 = num1;
		num_3 = num3;
		cout << num3 - num2;
	}
	else if (num3 < num2 && num2 < num1 ) {
		num_1 = num3;
		num_2 = num2;
		num_3 = num1;
		cout << num1 - num3;
	}
	return 0;
}
