#include <iostream> 
using namespace std;

int main() {
	char meal, drink;
	int quantity, amount;
	
	cout << "Meal: ";
	cin >> meal;
	
	switch (meal) {
		case 'a': 
		case 'A':
			cout << "Drinks: ";
			cin >> drink;
			cout << "Quantity: ";
			cin >> quantity;
			if (drink == 's' or 'S') {
				amount = (150 + 30) * quantity;
				cout << "Order: Chicken & Spaghetti and Small Drinks" << endl;
			}
			else if (drink == 'm' or 'M') {
				amount = (150 + 35) * quantity;
				cout << "Order: Chicken & Spaghetti and Medium Drinks" << endl;
			}
			else if (drink == 'l' or 'L') {
				amount = (150 + 40) * quantity;
				cout << "Order: Chicken & Spaghetti and Large Drinks" << endl;
			}
			cout << "Amount: "<< amount;
			break;
				
	
		
		case 'b':
		case 'B':	
			cout << "Drinks: ";
			cin >> drink;
			cout << "Quantity: ";
			cin >> quantity;
			if (drink == 's' or 'S') {
				amount = (150 + 30) * quantity;
				cout << "Order: Hamburger & Fries and Small Drinks" << endl;
			}
			else if (drink == 'm' or 'M') {
				amount = (150 + 35) * quantity;
				cout << "Order: Hamburger & Fries and Small Drinks" << endl;
			}
			else if (drink == 'l' or 'L') {
				amount = (150 + 40) * quantity;
				cout << "Order: Hamburger & Fries and Small Drinks" << endl;
			}
			
			cout << "Amount: "<< amount;
			break;
			
		
		case 'c':	
		case 'C':
			cout << "Drinks: ";
			cin >> drink;
			cout << "Quantity: ";
			cin >> quantity;
			if (drink == 's' or 'S') {
				amount = (150 + 30) * quantity;
				cout << "Order: Cheesedog and Small Drinks" << endl;
			}
			else if (drink == 'm' or 'M') {
				amount = (150 + 35) * quantity;
				cout << "Order: Cheesedog and Medium Drinks" << endl;
			}
			else if (drink == 'l' or 'L') {
				amount = (150 + 40) * quantity;
				cout << "Order: Cheesedog and Large Drinks" << endl;
			}
			
			cout << "Amount: "<< amount;
			break;

		
		case 'd':
		case 'D':
			cout << "Drinks: ";
			cin >> drink;
			cout << "Quantity: ";
			cin >> quantity;
			if (drink == 's' or 'S') {
				amount = (150 + 30) * quantity;
				cout << "Order: Pizza and Small Drinks" << endl;
				
			}
			else if (drink == 'm' or 'M') {
				amount = (150 + 35) * quantity;
				cout << "Order: Pizza and Small Drinks" << endl;
			}
			else if (drink == 'l' or 'L') {
				amount = (150 + 40) * quantity;
				cout << "Order: Pizza and Small Drinks" << endl;
			}
			
			cout << "Amount: "<< amount;
			break;
				
	}
	
	return 0;
}
