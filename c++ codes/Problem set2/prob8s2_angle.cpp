#include <iostream>
using namespace std;

int main()
{
	double first_angle,
		   second_angle,
		   third_angle;
		   
	cout << "Input the 1st angle of the triangle: "; cin >> first_angle;
	cout << "Input the 2nd angle of the triangle: "; cin >> second_angle;
	
	third_angle = first_angle + second_angle;
	
	cout << "The 3rd angle of the triangle is: " << third_angle;
	return 0;
}
