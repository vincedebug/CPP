#include <iostream>
using namespace std;

int main() {
	float p_average;
	cout << "Enter the grade point average: ";
	cin >> p_average;
	
	if (p_average >= 0 && p_average <= 4) {
		if (p_average >= 0 && p_average <= 0.99)
			cout << "Failed semester - registration suspended";
		if (p_average >= 1 && p_average <= 1.99)
			cout << "On probation for next semester";
		if (p_average >= 2 && p_average <= 2.99)
			cout << "( no message )";
		if (p_average >= 3 && p_average <= 3.49) 
			cout << "Dean's list for semester";
		if (p_average >= 3.5 && p_average <= 4.00)
			cout << "Highest honors for semester";
	}
	else{
		cout << "invalid input";
	}
	return 0;
	
}
