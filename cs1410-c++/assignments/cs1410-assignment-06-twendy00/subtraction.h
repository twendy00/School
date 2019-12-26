#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include <fstream>
#include "operation.h"

using namespace std;

class Subtraction : Operation
{
    // Declares protected data members
protected:
    double left;
    double right;

public:
    // Declares constructor and destructor
    Subtraction(double l, double r);
    ~Subtraction();

    // Declares perform and symbol functions
    double perform() const;
    char symbol() const;

    // Declares friend function to print out
    friend ostream &operator<<(ostream &out, const Subtraction &add);
};

#endif