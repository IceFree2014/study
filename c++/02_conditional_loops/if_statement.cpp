#include <iostream>
using namespace std;

int main()
{
    /* if (condition) */

    /* logical AND && */
    if (expression && expression1) {
        statements;
    }
    /* logical OR || */
    if (expression || expression1) {
        statements;
    }

    /* logical NOT ! */
    if (!expression) {
        statements;
    }

    if (condition) {
        statements;
        /* nest is statement */
        if (condition) {
            statements;
        } else {
            statements;
        }
    } else {
        statements;
        /* nest is statement */
        if (condition) {
            statements;
        } else {
            statements;
        }
    }

    /* while loop */
    while (condition) {
        statements;
    }

    /* for loop */
    for (init; condition; increment) {
        statements;
    }

    /* do while guaranteed to execute at least on time */
    do {
        statements;
    } while (condition);


    /* switch statement tests a varibale against a list of values, which are called cases  */
    switch (expression) {
    case value1:
        statements;
        break;
    case value2:
        statements;
        break;
    default:
        statements;
        break;
    }
    
    return 0;
}
