#include <iostream>
using namespace std;

int main() {
	int math, programming, it, english, computing, pe, nstp, itssb, rizal, history, average;
	cout << "Enter your grade in Math in the Modern World: ";
	cin >> math;
	cout << "Enter your grade in Math in Fundamentals of Programming: ";
	cin >> programming;
	cout << "Enter your grade in Math in Purposive Communication: ";
	cin >> english;
	cout << "Enter your grade in Living in the IT era: ";
	cin >> it;
	cout << "Enter your grade in Introduction to Computing: ";
	cin >> computing;
	cout << "Enter your grade in NSTP: ";
	cin >> nstp;
	cout << "Enter your grade in Physical Education: ";
	cin >> pe;
	cout << "Enter your grade in IT Software Solution for Business: ";
	cin >> itssb;
	cout << "Enter your grade in Life and Works of Rizal: ";
	cin >> rizal;
	cout << "Enter your grade in Readings in Philippine History: ";
	cin >> history;
	
	average = (math + programming + it + english + computing + pe + nstp + itssb + rizal + history) / 10;
	
	if (average >= 98 && average <= 100) {
		cout << "President's list \n100% Fee discount";
	} 
	else if (average >= 95 && average <= 97) {
		cout << "College Scholar \n50% Fee discount";
	}
	else if (average >= 92 && average <= 94) {
		cout << "Dean's List \n30% Fee discount";
	}
	else {
		cout << "none \n0% discount";
	}
	return 0;
}
