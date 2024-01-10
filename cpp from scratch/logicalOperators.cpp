#include <iostream>
using namespace std;

main() {

    // not - negates the bool data type
    // terminal output true == 1 && false == 0

    bool a = false;

    bool isTrue = !a;

    cout << isTrue;



    
    // and - checks if both operands or conditon are true 

    int x = 1;
    int y = 2;
    int z = 3;

    if (x < y && y < z) {
        cout << "True";
    }

    // or - checks if atleast one oeprand or condition is true
    if (x < y || z < y) {
        cout << "True";
    }


    return 0;
}