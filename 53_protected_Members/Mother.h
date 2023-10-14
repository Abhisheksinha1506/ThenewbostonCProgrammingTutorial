#ifndef MOTHER_H
#define MOTHER_H


class Mother
{
    public:
        Mother();
        int publicv; //This variable can be accessed outside the class

    protected:
        //Anything inside protected can be accessed by this class itself, any friend function or any inheriting class (so, if Daughter class is inheriting Mother class, it can access the protected stuff)
        int protectedv;

    private:
        int privatev; //This variable can only be accessed inside the class
};

#endif // MOTHER_H
