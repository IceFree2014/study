#include <iostream>
using namespace std;
/* Encapsulation: the packing of data and functions into a single component */

/* Part of the meaning of the word encapsulation is the idea of "surrounding" an entity, not just to keep what's inside together, but also to protect it. */

/* In object orientation, encapsulation means more than simply combining attributes and behavior together within a class; it also means restricting access to the inner working of that class. */

/* The key principle here is that an object only reveals what the other application components require to effectively run the application. All else is kept out of viem. This is called data hiding. */

/* For example, if we take our BankAccount class, we do not want some other part of our program to reach in and change the balance of any object, without going through the deposit()or withdram() behaviors. */

/* We should hide that attribute, control access to it, so it is accessible only by the object itself. This way, the balance can not be directly changed form outside of the object and is accessible only using its methods. */

/* This is also known as "black boxing", which refers to closing the inner working zones of tthe object, except of the pieces that we want to make public. */

/* This allows us to change attributes and implementation of methods without altering the over all program. For example, We can come back later and change the data type of the balance attribute. */

/* In sumary the benefits of encapsulation are:
    -Control the way data is accessed or modified.
    -Code is more flexible and easy to change with new requirements.
    -Change one part of code without affecting other part of code.
 */

/* Access Specifiers */
/* Access Specifiers are used to set access levels to particular members of the class. */

/* The three levels of access specifiers are public, protected, and private. */

/* A public member is accessible from outside the class, and anywhere within the cope of the class object. */

/* A private member can not be accessed, or even viewed, from outside the class; it can be accessed only form within the class. */

/* A public member function may be used to access the private members. For example. */

/* If no access specifier is defined, all members of a class are set to private by default. */

class myClass {
    public:
     //string name;//name attribute is public
     void setName(string x) {//used to set the name attribute
        name = x;
     }

     string getName() {// used to get the name attribute
        return name;
     }

    private:
     string name;//name atrtibute is private and not accessible form the outside

    //string test; //private by default
};
/* This allows for changes to the implementation of the methods and attributes, without affecting the outside code. */

int main()
{
    myClass myObj;
    myObj.setName("SoloLearn");
    cout << myObj.getName() << endl;
    //myObj.test = "TEST";//private not be accessed
    //myObj.name = "SoloLearn";
    //cout << myObj.name << endl;
    //myObj.name = "Robert";
    //cout << myObj.name << endl;
    return 0;
}
