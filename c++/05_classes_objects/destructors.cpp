#include <iostream>
using namespace std;
/* Destructors  */
/* Destructors are special functions, as well.They're called when an object is destroyed or deleted.  */

/* Objects are destroyed when they go out of sope, or whenever the delete expression is applied to a pointer directed at an object of a class.  */

/* The name of a destructor will be exactly the same as the class, only prefixed with a tilde(~). A destructor can't return a value or take any parameters. */

/* Destructors can be very useful for releasing resources before coming out of the program. This can include closing files, releasing memory, and so on.  */

class MyClass {
    public:
     MyClass() {
        cout << "Constructor" << endl;
     }
     ~MyClass() {
    //cant't return and can't take parameter so only define one. so cant 't overload.
        cout << "Destructor" << endl;
    }

};

int main()
{
    MyClass obj;
    //when obj object created prints "Constructor", delete object prints "Destructor"
    
    return 0;
}
