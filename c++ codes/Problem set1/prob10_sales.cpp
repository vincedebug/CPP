#include <iostream>
#include <string>
using namespace std;
int main()
{
	string movie_name;
	double adult_ticketPrice,
		   child_ticketPrice,
		   adult_ticketSold,
		   child_ticketSold,
		   percent_ofDonation,
		   amount_donated,
		   gross_amount;
		   
	cout << "Enter the movie name: ";
	cin >> movie_name;
	
	cout << "Enter the price of an adult ticket: ";
	cin >> adult_ticketPrice;
	
	cout << "Enter the price of a child ticket: ";
	cin >> child_ticketPrice;
	
	cout << "Enter the adult ticket sold: ";
	cin >> adult_ticketSold;
	
	cout << "Enter the child ticket sold: ";
	cin >> child_ticketSold;
	
	cout << "Enter the percentage donation: ";
	cin >> percent_ofDonation;
	
	gross_amount = (adult_ticketSold*adult_ticketPrice)+(child_ticketSold*child_ticketPrice);
	amount_donated = (percent_ofDonation/100) * gross_amount;
	
	
	cout << "Movie name: "<< movie_name << endl;
	cout << "The number of ticket sold: "<< adult_ticketSold + child_ticketSold << endl;
	cout << "Gross amount: " << gross_amount << endl;
	cout << "Amount donated: "<< amount_donated << endl;
	cout << "Net sale: "<< gross_amount - amount_donated << endl;
	return 0;
}
