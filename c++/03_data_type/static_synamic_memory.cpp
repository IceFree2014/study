#include <iostream>
using namespace std;
/* In a C++ program, memory is divided into two parts:
    The stack: All of you local variables take up memory form the stack
    The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory
 */
/* heap: a pool of memory used for dynamic memory allocation */
/* in c++ program you can allocate memory at run time within the heap for the varibale of a given type using the new operator, which returns the address of the space allocated. */
int main()
{
    // new operator return the address of the space allocated.
    /* This allocates the memory size necessary for storing an integer on the heap, and returns that address */
    int * p = new int;/* the pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value.*/
    cout << p << endl;
    *p = 5;/* the value of 5 is stored at that address in the heap. */
    cout << *p << endl;
    delete p;/* for local variables on the stack, manageing memory is carried out automatically. On the heap, it's necessary to manually handle the dynamically memory, and use the delete operator to free up the memory when it's no longer needed. */

    int *q = new int;//request memory
    *q = 10;// store value
    cout << *q << endl; //use value
    delete q;//free up the memory
    q = NULL;

    int *parry = NULL;//pointer initialized with null
    parry = new int[20];//request memory
    delete []parry;//delete array pointed to by parry (note the [])

    return 0;
}
