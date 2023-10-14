#include <iostream>
//Operator Overloading means giving an existing operator a special meaning
#include "Sally.h"
using namespace std;

int main()
{
   Sally a(34); //Uses the 2nd Constructor
   Sally b(21); //Uses the 2nd Constructor
   Sally c; //Uses the 1st Constructor

   c = a + b; //Here the + sign has a special meaning - it runs the operator+ function of the Sally Class

   cout << c.num << endl;
}
