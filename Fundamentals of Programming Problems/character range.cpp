#include <iostream>
using namespace std;

int main() {
	char letter;
	
	cout << "enter a letter ";
	cin >> letter;
	
	if (letter >= 'a' && letter <= 'z ' || letter >= 'A' && letter <= 'Z' ) {
		cout << "It is a letter";
		
	}
	else {
		cout << "Its not a letter";
	}
	
	return 0;
}
