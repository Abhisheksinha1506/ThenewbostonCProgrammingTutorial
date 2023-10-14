#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h"

class Daughter: public Mother //Basically this means that whatever functions were public in the Mother class, have now been inherited by the Daughter class. This is the syntax of inheritence.
{
    public:
        Daughter();

};

#endif // DAUGHTER_H

//During inheritence, it is going to grab all the public (in this case) functions of the Base Class, but not the constructors
