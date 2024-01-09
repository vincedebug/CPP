#include <iostream>
using namespace std;

int main()
{
	int units, tuition_fee;
	cout << "Enter the number of units: ";
	cin >> units;
	
	if (units >= 21) {
		cout << 7000;
	}
	
	else {
		tuition_fee = units * 300;
		 cout << "Your tuition fee is " << tuition_fee;
	}
	return 0;
	
}
