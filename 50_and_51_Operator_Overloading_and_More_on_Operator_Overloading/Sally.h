#ifndef SALLY_H
#define SALLY_H


class Sally
{
    public:
        int num;
        Sally(); //First Constructor
        Sally(int); //Second Constructor
        Sally operator+(Sally); //The syntax to creating a special operator. Here, we are essentially giving prototype for the '+' operator's new meaning when used between 2 objects of Sally class

        //Sally can be considered as a custom data type
};

#endif // SALLY_H
