#include <iostream> 
using namespace std;

int main() {
	char room_type;
	float amount, option, interest, discount;
	int code;
	cout << "Enter Room type: ";
	cin >> room_type;
	
	
	switch (room_type) {
		case 'a':
		case 'A':
			cout << "Room is Standard \n";
			cout << "Enter code of payment: ";
			cin >> code;
			switch(code) {
				case 1:
					cout << "Cash\n";
					discount = 6500 * 0.02;
					amount = 6500 - discount;
					cout << "Amount: " << amount;
					
					break;
				case 2:
			    	cout << "Credit Card \n";
					interest = 6500 * 0.05;
					amount = 6500 + interest;
					cout << "Amount: " << amount;
					
					break;
			}
			break;
			
		case 'b':
		case 'B':
			cout << "Room is Deluxe \n";
			cout << "Enter code of payment: ";
			cin >> code;
			switch(code) {
				case 1:
					cout << "Cash\n";
					discount = 17000 * 0.02;
					amount = 17000 - discount;
					cout << "Amount: " << amount;
					
					break;
				case 2:
			    	cout << "Credit Card \n";
					interest = 17000 * 0.05;
					amount = 17000 + interest;
					cout << "Amount: " << amount;
					
					break;
			}
			break;
			
		case 'c':
		case 'C':
			cout << "Room is Suite \n";
			cout << "Enter code of payment: ";
			cin >> code;
			switch(code) {
				case 1:
					cout << "Cash\n";
					discount = 20000 * 0.02;
					amount = 20000 - discount;
					cout << "Amount: " << amount;
					
					break;
				case 2:
			    	cout << "Credit Card \n";
					interest = 20000 * 0.05;
					amount = 20000 + interest;
					cout << "Amount: " << amount;
					
					break;
			}
			break;
	}
	
}
