#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter a number: ";
	cin >> a >> b;
	
	if (a > b) {
		cout << a;
	}
	else if (b > a) {
		cout << b;
	}
	else {
		cout << endl;
	}
	return 0;
	
}
