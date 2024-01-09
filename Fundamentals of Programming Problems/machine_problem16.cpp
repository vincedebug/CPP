#include <iostream>
using namespace std;

int main() {
	float TEMP;
	cout << "Enter the temperature: ";
	cin >> TEMP;
	
	if (TEMP < 0) {
		cout << "ICE ";
	}
	else if (TEMP >= 0 && TEMP <= 100) {
		cout << "WATER ";
	}
	else {
		cout << "STEAM ";
	}
	
	return 0;
}
