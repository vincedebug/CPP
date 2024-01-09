#include <iostream>
using namespace std;

int main() {
	int value, tax;
	
	cout << "Enter the Value: ";
	cin >> value;
	
	if (value < 250001) {
		tax = value * 0.5;
		cout << "The real estate tax is "<< tax;
		
	}
	else if (value > 250000 && value <= 500000) {
		tax = value * 0.10;
		cout << "The real estate tax is " << tax;
	}
	else {
		tax = value * 0.15;
		cout << "The real estate tax is " << tax;
	}
	
	return 0;
}
