#include <iostream>
using namespace std;

int main() {
	int amount;
	
	cout << "Enter the amount you have collected: ";
	cin >> amount;
	
	if (amount >= 20000) {
		cout << "CONGRATULATIONS, You have reached the target amount. ";
	}
	else {
		cout << " SORRY, you have to collect more ";
		
	}
}
