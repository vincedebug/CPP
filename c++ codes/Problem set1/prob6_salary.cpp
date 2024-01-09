#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	double rate_perHour, hours_worked;
	
	cout << "Enter the name: ";
	cin >> name;
	cout << "Enter the rate per hour: ";
	cin >> rate_perHour;
	cout << "Enter the hours worked: ";
	cin >> hours_worked;
	cout << name <<", Your salary is "<< rate_perHour*hours_worked;
	
	
	return 0;
	
	 
}

