#include <iostream>
using namespace std;

int main() {
	float r_num;
	
	cout << "Enter Ritcher Number: ";
	cin >> r_num;
	
	if (r_num < 5 ) { 
		cout << "LITTLE OR NO DAMAGE ";
	}
	else if (r_num >= 5.0 && r_num <= 5.5) { 
		cout << "SOME DAMAGE";
	}
	else if (r_num >= 5.6 && r_num <= 6.5) {
		cout << "SERIOUS DAMAGE";
	}
	else if (r_num >= 6.6 && r_num <= 7.5) {
		cout << "SERIOUS DAMAGE";
	}
	else {
		cout << "CATASTROPHE";
	}
	return 0;
}
