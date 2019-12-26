#ifndef DIVISION_H
#define DIVISION_H

#include <fstream>
#include "operation.h"

using namespace std;

class Division : Operation
{
    // Declares protected data members
protected:
    double left;
    double right;

public:
    // Declares constructor and destructor
    Division(double l, double r);
    ~Division();

    // Declares perform and symbol functions
    double perform() const;
    char symbol() const;

    // Declares friend function to print out
    friend ostream &operator<<(ostream &out, const Division &add);
};

#endif