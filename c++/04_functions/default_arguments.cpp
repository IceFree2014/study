#include <iostream>
using namespace std;

int sum(int a, int b = 42)//b is default value
{
    return a + b;
}

int volume(int l = 1, int w = 1, int h = 1) {
    return l * w * h;
}

int main()
{
    cout << sum(24, 36) << endl;//both two parameter
    cout << sum(24) << endl;//only one parameter
    cout << volume() << endl;
    cout << volume(5) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(3, 7, 6) << endl;
    
    return 0;
}
