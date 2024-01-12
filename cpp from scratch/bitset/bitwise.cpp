#include <iostream>
#include <bitset>
using namespace std;

int main() {

    unsigned long int data{1};

    cout << "binary: " << bitset<4>(data);

    return 0;
}