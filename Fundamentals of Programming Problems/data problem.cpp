#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "input: ";
    cin >> x;

    if (x == 'S') { // Use single quotes for character comparison
        x = 5;
        cout << x << endl;
    }

    return 0;
}

