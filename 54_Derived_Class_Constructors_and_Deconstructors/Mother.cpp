#include "Mother.h"
#include<iostream>
using namespace std;
Mother::Mother() //Constructor
{
    cout << "I am the mother constructor!" << endl;
}

Mother::~Mother(){
    cout << "Mother deconstructor!" << endl;
}
