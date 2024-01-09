#include <iostream>
using namespace std;

int main()
{
	
	double first_num, 
		   second_num, 
	       third_num, 
		   fourth_num, 
		   fifth_num,
		   sum,
		   difference,
		   product,
		   quotient;
		   
	cout << "Enter the first number: "; cin >> first_num;
	cout << "Enter the second number: "; cin >> second_num;
	cout << "Enter the third number: "; cin >> third_num;
	cout << "Enter the fourth number: "; cin >> fourth_num;
	cout << "Enter the fifth number: "; cin >> fifth_num;
	
	sum = first_num + second_num;
	difference = sum - third_num;
	product = difference * fourth_num;
	quotient = product / fifth_num;
	
	cout << "The sum is "<< sum << endl;
	cout << "The difference is " << difference << endl;
	cout << "The product is " << product << endl;
	cout << "The quotient is " << quotient << endl;
	
	
	
	return 0;
}
