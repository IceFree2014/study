#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /* random number genertator function */
    /* however the rand() function will only return a pseudo random number.
     This means that each time the code is run, it generates the same numbers */
    for (int i = 0; i < 10; i++) {
        cout << rand() << endl;
    }

    for (int i = 0; i < 10; i++) {
        /* generates whole number within a range of 1 to 6  */
        cout << 1 + (rand() % 6) << endl;
    }
    return 0;
}
