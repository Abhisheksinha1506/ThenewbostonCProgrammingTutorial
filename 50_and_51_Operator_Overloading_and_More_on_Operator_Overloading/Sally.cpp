#include "Sally.h"

Sally::Sally() //1st Constructor
{
}

Sally::Sally(int a){ //2nd Constructor
    num = a;
}

Sally Sally::operator+(Sally aso){ //The first Sally is the return type
    //The name of the function is 'operator+' since we are overloading +
    //'Sally aso' means that we are taking argument as a Sally class's object 'aso'
    //'aso' - AANother Sally Object

    Sally brandNew; //'brandNew' is the Sally object which we will be returning

    brandNew.num=num + aso.num; //This statement means that the number property of the 'brandNew' Sally object will be equal to the num property of the current object and the num property of aso Sally object that was passed into this function

    return(brandNew);
}
