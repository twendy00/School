#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <fstream>
#include "operation.h"

using namespace std;

class Multiplication : Operation
{
    // Declares protected data members
protected:
    double left;
    double right;

public:
    // Declares constructor and destructor
    Multiplication(double l, double r);
    ~Multiplication();

    // Declares perform and symbol functions
    double perform() const;
    char symbol() const;

    // Declares friend function to print out
    friend ostream &operator<<(ostream &out, const Multiplication &add);
};

#endif