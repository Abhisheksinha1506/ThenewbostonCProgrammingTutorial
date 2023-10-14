#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Mother ma;

    Daughter tina;

    //Even though the Derived Class (here Daughter) does not inherit the Base Class's (here Mother's) constructor or deconstructor, during execution, the Base Class's (here Mother class's) constructor is invoked before the execution of the Daughter class's stuff and the Base Class's (here Mother class's) destructor is invoked at last. Like a sandwich of constructors and deconstructors.

//The base class's constructors are invoked first (in the respective hierarchy in the program
}
