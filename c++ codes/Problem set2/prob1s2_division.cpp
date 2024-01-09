#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int dividend,
		   divisor,
		   quotient,
		   remainder;
		   
	cout << "Enter the dividend: ";
	cin >> dividend;
	
	cout << "Enter the divisor: ";
	cin >> divisor;
	
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	
	cout << "Qoutient: " << quotient << endl;
	cout << "Remainder: " << remainder;
}
