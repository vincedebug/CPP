#include <iostream> 
using namespace std;

int main()
{
	int speed;
	cout << "Enter the aircraft speed(kilometer / hour ): ";
	cin >> speed;
	
	
	if (speed > 1100) {
		cout << "It's a civilian aircraft"; 
	}
					
	else if (speed >= 500 && speed <= 1100) {
		cout << "It's a military aircraft!"; 
		
	}
	else {
		cout << "It's a BIRD"; 
	}
	return 0;
}
