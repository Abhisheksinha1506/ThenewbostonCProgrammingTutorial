#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

//Inheritence is the idea that a class can 'inherit' things from another class
int main()
{
    Mother mom;
    mom.sayName(); //Normal Calling of the function

    Daughter tina;
    tina.sayName(); //This will work because the sayName function was inherited from the Base Class
}
