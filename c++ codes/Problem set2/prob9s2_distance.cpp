#include <iostream>
using namespace std;

int main()
{
	double km_perHour,
		   mi_perHour;
	
	
	cout << "Input the distance in kilometer: "; cin >> km_perHour;  
	mi_perHour = km_perHour * 0.6213712;
	
	cout << "The "<< km_perHour << " Km./hr."<< " means "<< mi_perHour << " Miles/hr";
	
	return 0;
}
