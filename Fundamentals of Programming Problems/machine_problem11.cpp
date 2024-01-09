#include <iostream>
using namespace std;

int main() {
	
	int income, tax;
	
	cout << "Enter your income: ";
	cin >> income;
	
	if (income >=0 && income <= 5000) {
		cout << "The Tax Rate is Zero.";
	}
	else if (income >= 5001 && income <= 10000) {
		tax = 100 + (0.03 * income);
		cout << tax;
	}
	else if (income >= 10001 && income <= 25000) {
		tax = 200 + (0.06 * income);
		cout << tax;
	}
	else if (income >= 25001 && income <= 50000) {
		tax = 300 + (0.09 * income);
		cout << tax;
	}
	else {
		tax = 500 + (income*0.15);
		cout << tax;
	}
	
	
	return 0;
	
}
