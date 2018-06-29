#include <iostream>
using namespace std;

/* all pointers share the same data type -a long hexadecimal number that represents a memory address .The only difference between pointers of different data types is the variables that the pointer points to */
int main()
{
    int score = 5;
    int *scorePtr = &score;
    cout << &score << endl;
    cout << scorePtr << endl;
    cout << score << endl;
    *scorePtr = 10;
    cout << score << endl;

    return 0;
}
