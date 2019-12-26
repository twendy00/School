#include "operation.h"

//Initializes constructor from Operation header
Operation::Operation(double l, double r) : left(l), right(r) {}

// Calls destructor from Operation header
Operation::~Operation() {}

// Creates overloaded operator to print out
ostream &operator<<(ostream &out, const Operation &opr)
{
    return out;
}
