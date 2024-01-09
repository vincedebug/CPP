#include <iostream> 
using namespace std;

int main() {
	int kiloWatt_hours, bill;
	
	cout << "Enter number of kilowatt hours: " ;
	cin >> kiloWatt_hours;
	
	if (kiloWatt_hours >= 1 && kiloWatt_hours <= 99) {
		bill = kiloWatt_hours * 10;
		cout << "Total electric bill is P "<< bill;
	}
	else if (kiloWatt_hours >= 100 && kiloWatt_hours <= 249) {
		bill = kiloWatt_hours * 50;
		cout << "Total electric bill is P "<< bill;
	}
	else if (kiloWatt_hours >= 250) {
		bill = 99 * 10 + 150 * 50 + (kiloWatt_hours - 249) * 100;
		cout << "Total electric bill is P "<< bill;
	}
	else {
		cout << "invalid input";
	}
	return 0;
}
