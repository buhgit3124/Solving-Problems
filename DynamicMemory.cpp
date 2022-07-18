#include <bits/stdc++.h>
using namespace std;

class cust
{
public:
    int p;
    
};

int main()
{
    // All Types of dynamic memory allocation
    // pointer-variable = new data-type;
    //  Pointer initialized with NULL
    //  Then request memory for the variable
    int *p = NULL;
    p = new int;

    // Combine declaration of pointer
    // and their assignment
    int *p = new int;

    // pointer-variable = new data-type(value);
    int *p = new int(25);
    float *q = new float(75.25);

    // Custom data type

    // Works fine, doesn’t require constructor
    cust *var1 = new cust;

    // Works fine, doesn’t require constructor
    cust *var2 = new cust();

    // Notice error if you comment this line
    //cust *var = new cust(25);
    //Allocate a block of memory: new operator is also used to allocate a block(an array) of memory of type data-type. 
    //pointer-variable = new data-type[size];
    int *p = new int[10];

    /*delete operator
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language. 
Syntax: 

// Release memory pointed by pointer-variable
delete pointer-variable; */
delete p;
delete q;
// Release block of memory 
// pointed by pointer-variable
//delete[] pointer-variable;  

Example:

   // It will free the entire array
   // pointed by p.
   delete[] p;
    return 0;
}