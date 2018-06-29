#include <iostream>
#include "myClass.h"
using namespace std;


int main()
{
    myClass obj;
    myClass *ptr = &obj;
    //obj.myPrint();
    /* -> arrow member selection operator(->) is used to access an object's members with a pointer. */

    //-> == (*ptr).
    ptr->myPrint();

    //-> == (*ptr). same to c pointer
    (*ptr).myPrint();

    /* When working with an object, use the dot member selection opeator(.), When working with a pointer to the object, use the arrow member selection operator. */

    return 0;
}
