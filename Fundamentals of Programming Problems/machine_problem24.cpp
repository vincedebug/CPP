#include <iostream>
using namespace std;

int main() {
	int w_speed;
	cout << "Enter the wind speed: ";
	cin >> w_speed;
	
	if (w_speed < 25) {
		cout << "not a strong wind";
	}
	else if (w_speed >= 25 && w_speed <=38) {
		cout << "strong wind";
	}
	else if (w_speed >= 39 && w_speed <= 54) {
		cout << "gale";
	}
	else if (w_speed >= 54 && w_speed <= 72) {
		cout << "whole gale";
	}
	else if (w_speed > 72) {
		cout << "hurricane";
	}
	return 0;
	
}
