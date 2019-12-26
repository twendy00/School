#ifndef ADDITION_H
#define ADDITION_H

#include <fstream>
#include "operation.h"

using namespace std;

class Addition : Operation
{
    // Declares protected data members
protected:
    double left;
    double right;

public:
    // Declares constructor and destructor
    Addition(double l, double r);
    ~Addition();

    // Declares perform and symbol functions
    double perform() const;
    char symbol() const;

    // Declares friend function to print out
    friend ostream &operator<<(ostream &out, const Addition &add);
};

#endif