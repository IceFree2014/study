#include <iostream>
//#include <string> /* is included in the <iostream> library */
using namespace std;

int main()
{
    string a = "I am learning C++";
    string b = "I lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll";
    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(string) << endl;

    cout << b << endl;
    cout << sizeof(b) << endl;//why sizeof(b) == 32 ?
    return 0;
}
