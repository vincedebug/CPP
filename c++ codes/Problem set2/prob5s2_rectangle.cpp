#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double lenght_ofRec, width_ofRec;
	
	cout << "Input the lenght of the rectangle: "; cin >> lenght_ofRec;
	cout << "Input the width of the rectangle: "; cin >> width_ofRec;
	
	cout << "The are of the rectangle is: "<< lenght_ofRec*width_ofRec;
	cout << endl;
	cout << "The perimeterof the rectangle is: "<< (lenght_ofRec+width_ofRec) * 2;
	
}
