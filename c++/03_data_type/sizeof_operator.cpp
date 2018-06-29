#include <iostream>
using namespace std;

int main()
{
    cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    double myArr[10];
    cout << sizeof(myArr) << endl;
    int number[100];
    cout << sizeof(number) / sizeof(number[0]) << endl;
    cout << sizeof(string) << endl;

    return 0;
}
