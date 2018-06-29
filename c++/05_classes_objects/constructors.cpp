#include <iostream>
using namespace std;
/* constructors */
/* Class constructors are special member functions of a class. They are executed 
whenever new objects are created within that class. */

/* The constructor's name is identical to that of the class. It has no return type, not even void.  */

/* constructors can be very useful for setting initial values for certain member variables.  */

/* A default constructor has no parameters. However, when needed, parameters can be added to a constructor. This make it possible to assign an initial value to an object when it's created.  */

/* It's possible to have multiple constructors that take different numbers of parameters.  */

class myClass {
    public:
     //myClass class constructor
     /* special member function of type myClass */
     //new objects are created will be executed automatically
     myClass(string nm) {
        //initial value to name attribute
        setName(nm);
        cout << "Hey" << endl;
     }
     myClass(string nm, string mm) {
        setName(nm);
        cout << mm << endl;
     }
     void setName(string x) {
        name = x; 
     }
     string getName() {
        return name;
     }

    private:
     string name;
};

int main()
{
    //myClass myObj;
    myClass ob1("David");//pass the constructor's parameter.
    cout << ob1.getName() << endl;

    myClass ob2("Amy");
    cout << ob2.getName() << endl;

    myClass ob3("Robert", "Hello myClass constructor2");
    cout << ob3.getName() << endl;
    return 0;
}
