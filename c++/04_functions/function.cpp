#include <iostream>
using namespace std;
/* A function is a group of statements that perform a particular task */
/* using functions can have many advantages, including the following:
    You can reuse the code within a function
    You can easily test individual functions
    If it's necessary to make any code modifications, you can make modifications with a single function, without altering the program structure.
 */
/* Define a C++ function using the following syntax:  */
/*
return_type function_name(parameter list)
{
    //A collection of statements defining what the function does.
    body of the function
}
*/
/* must declare a function prior to calling it  */
void printSomething()
{
    cout << "Hi there" << endl;
}

int addNumber(int x, int y) {
    return x + y;
}

int main()
{
    printSomething();
    cout << addNumber(12, 12) << endl;
    return 0;
}
