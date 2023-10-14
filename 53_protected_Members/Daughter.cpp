#include "Daughter.h"
using namespace std;
Daughter::Daughter()
{
}

void Daughter::doSomething(){
    publicv =1; //Daughter is accessing the public variable from the Mother class

    protectedv =2; //Daughter class is accessing the protected variable from the Mother class

}
