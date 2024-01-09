#include <iostream>
using namespace std;

int main() {
	int g_percent;
	
	cout << "Enter the Grade Percent: ";
	cin >> g_percent;
	
	if (g_percent >= 98 && g_percent <= 100) {
		cout << "Grade equivalent is 1.00";
	}
	else if (g_percent >= 95 && g_percent <= 97) {
		cout << "Grade equivalent is 1.25";
	}
	else if (g_percent >= 92 && g_percent <= 94) {
		cout << "Grade equivalent is 1.50";
	}
	else if (g_percent >= 89 && g_percent <= 91) {
		cout << "Grade equivalent is 1.75";
	}
	else if (g_percent >= 85 && g_percent <= 88) {
		cout << "Grade equivalent is 2.00";
	}
	else if (g_percent >= 82 && g_percent <= 84) {
		cout << "Grade equivalent is 2.25";
	}
	else if (g_percent >= 80 && g_percent <= 81) {
		cout << "Grade equivalent is 2.50";
	}
	else if (g_percent >= 77 && g_percent <= 79) {
		cout << "Grade equivalent is 2.75";
	}
	else if (g_percent >= 75 && g_percent <= 76) {
		cout << "Grade equivalent is 3.00";
	}
	else {
		cout << "OUT OF RANGE";
	}
	
	return 0;
}
