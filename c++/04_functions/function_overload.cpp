#include <iostream>
using namespace std;
/* function overloading allows to create multiple functions with the same name, so long as they have different parameters. */

void printNumber(int a) {

    cout << a << endl;
}

void printNumber(float a) {

    cout << a << endl;
}

int main()
{
    cout << printNumber(1) << endl;
    cout << printNumber(3.4) << endl;
    return 0;
}
