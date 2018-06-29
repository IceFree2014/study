#include "myClass.h"
#include <iostream>
using namespace std;

myClass::myClass()
{
    cout << "This is myClass constructor function" << endl;
    //ctor
}

/* Since destructor can't take parameters, they also can't be overloaded. Each class will have just one destructor. */

/* Defining a destructor is not mandatory; if you don't need one, you don't have to define one.  */
myClass::~myClass()
{
    cout << "This is myClass destructor function" << endl;
}

/* Since myPrint() is regular member function, it's necessary to specify its return type in both the declaration and the definition.  */
void myClass::myPrint()
{
    cout << "Hello" << endl;
}
