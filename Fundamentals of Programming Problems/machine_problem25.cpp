#include <iostream>
using namespace std;

int main() {
	int watts;
	cout << "Enter the watts: ";
	cin >> watts;
	switch (watts) {
		case 15:
			cout << "125";
			break;
		case 25:
			cout << "215";
			break;
		case 40:
			cout << "500";
			break;
		case 60:
			cout << "880";
			break;
		case 75:
			cout << "1000";
			break;
		case 100:
			cout << "1675";
		default:
			cout << "-1";
	}
	return 0;
}
