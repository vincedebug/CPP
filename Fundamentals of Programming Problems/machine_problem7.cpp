#include <iostream>
using namespace std;

int main() 
{
	float overtime_pay, overtime_hours, worked_hours, gross_pay, hourly_rate;
	cout << "Enter worked hours: ";
	cin >> worked_hours;
	
	cout << endl;
	cout << "Enter hourly rate: ";
	cin >> hourly_rate;

	if (worked_hours <= 40) {
		gross_pay = worked_hours * hourly_rate;
		cout << "Your gross pay is " << gross_pay;
	}

	else {
		overtime_hours = worked_hours - 40;
		overtime_pay = hourly_rate * 1.50;
		gross_pay = (worked_hours * hourly_rate) + overtime_pay*overtime_hours;
		cout << "Over time pay is: " << overtime_pay << endl;
		cout << "Gross pay is: " << gross_pay;
		
		
	}
	return 0;
}
