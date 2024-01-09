#include <iostream>
using namespace std;

int main() {
	int V_Class, km;
	
	cout << "Enter the Class: ";
	cin >> V_Class;
	cout << "Enter the Km: ";
	cin >> km;
	
	if (V_Class == 1) {
		cout << "The rate in km is " << km * 41;
		cout << " The Additional fee is "<< km * 20;	
	}
	else if (V_Class == 2) {
		cout << "The rate in km is " << km * 102 << endl;
		cout << " The Additional fee is "<< km * 35;	
	}
	else if (V_Class == 3) {
		cout << "The rate in km is " << km * 122;
		cout << " The Additional fee is "<< km * 50;	
	}
	else {
		cout << "invalid input";
	}
	

	return 0;
}
