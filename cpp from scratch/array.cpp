#include <iostream>
using namespace std;

int main() {

    string girls[2] = {"Shane", "Ana"};

    int age[2] = {20, 21};
    
    cout << sizeof(int) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;

    
    // display all the values in the array


    cout << sizeof(girls) << endl;
    
    int girlsLen = sizeof(girls) / sizeof(string);    
    cout << girlsLen << endl;
    
    for (int i = 0; i < girlsLen; i++) {
        cout << girls[i] << endl;
    } 

    


    return 0;
}