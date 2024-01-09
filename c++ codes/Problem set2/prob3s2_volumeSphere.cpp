#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double radius_ofSphere,volume_ofSphere;
	
	cout << "Enter the radius of a sphere: "; cin >> radius_ofSphere;
	
	
	volume_ofSphere = (radius_ofSphere*radius_ofSphere*radius_ofSphere) * 4* 3.14;
	cout << "The volume of the sphere is: "<< fixed<<setprecision(2) << volume_ofSphere/3;
	
}
