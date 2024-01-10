#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // variable declaration

    float a = 10.5432;


    // output
    cout << "Initial value without setting the precision of decimal point to tenths place: " <<  a  << endl;

    cout << "using setprecision the new value of a number reduce in tenths place: "<< setprecision(3) << a;

    return 0;
}