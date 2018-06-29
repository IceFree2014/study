#include <iostream>
using namespace std;

/* Each class has a name, and describles attributes and behavior. */
/* Method is another term for a class's behavior. A method is basically a function that belongs to a class */ 

/*
void print(void)
{
    //not in this scope class BankAccount class define
    BankAccount test;
    test.sayHi();
    cout << "print function" << endl;
}
*/

class BankAccount {
    //access specifier
    //public
    //private
    //protected

    public:
        void sayHi() {
            cout << "Hi" << endl;
        }
        void open(int a, int b) {
            cout << a + b << endl;
        }
};


int main()
{
    //instantiate an object
    BankAccount test;//define variable of a type (BankAccount type)
    /* Our object named test has all the members of the class defined */
    /* Notice the dot separator(.) that is used to access and call the method of the object */ 
    test.sayHi();
    test.open(1, 2);
    //print();
    return 0;
}
