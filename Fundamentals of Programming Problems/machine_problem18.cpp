#include <iostream>
using namespace std;

int main() {
	char c_id;
	
	cout << "Enter the class ID: ";
	cin >> c_id;
	
	if (c_id == 'B' or c_id == 'b' ) {
		cout << "Battleship";
	}
	else if (c_id == 'C' or c_id == 'c' ) {
		cout << "Cruiser";
	}
	else if (c_id == 'D' or c_id == 'd' ) {
		cout << "Destroyer";
	}
	else if (c_id == 'F' or c_id == 'f' ) {
		cout << "Frigate";
	}
	
	
	return 0;
}
