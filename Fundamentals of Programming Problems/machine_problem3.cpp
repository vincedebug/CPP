#include <iostream>
using namespace std;

int main()
{
	int total_purchase, discount;
	
	cout << "Total Purchase: ";
	cin >> total_purchase;
	
	if (total_purchase >= 5000) {
		discount = total_purchase - (total_purchase * 0.03);
		cout << "The amount to be paid is: " << discount;
	}
	else {
		cout << "The amount to be paid is: "<< total_purchase;
	}
}
