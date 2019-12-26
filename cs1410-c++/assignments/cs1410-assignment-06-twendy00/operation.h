#ifndef OPERATION_H
#define OPERATION_H

#include <iostream>
using namespace std;

class Operation
{
    // Declares protected data members
protected:
    double left;
    double right;

public:
    // Declares constructors
    Operation(double l, double r);

    // Declares pure virtual functions
    virtual double perform() const = 0;
    virtual char symbol() const = 0;

    // Declares friend functions
    friend ostream &operator<<(ostream &out, const Operation &opr);

    // Declares virtual destructor
    virtual ~Operation();
};

#endif