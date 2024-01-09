#include <iostream>
using namespace std;

int main(){
	int profit, sales_expenses, tax ;
	
	cout << "Enter the expenses: ";
	cin >> sales_expenses;
	
	
	profit = sales_expenses;
	if (profit >= 0 && profit <= 10000) {
		cout << "Tax rate is 0" << endl;
		cout << "The profit is "<< profit;
		
	}
	else if (profit >= 10001 && profit <= 30000 ) {
		tax = (profit * 0.03) + 100;
		cout << "Tax rate is " << tax << endl;
		cout << "The profit is " << profit;
	}
	else if (profit >= 30001 && profit <= 50000 ) {
		tax = (profit * 0.05) + 200;
		cout << "Tax rate is " << tax << endl;
		cout << "The profit is " <<  profit;
	}
	else if (profit > 50000) {
		tax = (profit * 0.07) + 300;
		cout << "Tax rate is " << tax << endl;
		cout << "The profit is " << profit;
	}
	return 0;
}
