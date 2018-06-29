#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   /* srand() function is used to fenerate truly random numbers  */ 
   /* helps to generate truly random numbers */
    /* a solution to generate truly random numbers, is to use the current time as a seed value for the srand()function */
    //srand(98);
    //srand(100);
    srand(time(0));//time function to get the number of seconds on your system
    //time(0) will return the current second cout
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }

    while (0) {
        cout << time(0) << endl;
    }
    return 0;
}
