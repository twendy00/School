#include "addition.h"
#include <iomanip>

// Initializers constructor and delegates initialization to the Operation constructor
Addition::Addition(double l, double r) : Operation(l, r), left(l), right(r){};

// Destructor
Addition::~Addition() {}

// Creates perform function to add left and right numbers
double Addition::perform() const
{
    return left + right;
}

// Creates symbol function to return the + symbol
char Addition::symbol() const
{
    return '+';
}

// Overloaded operator to print out the left number, symbol, right number, equals sign, and totals
// Output has been formatted to show 2 decimal points and various amounts of column space
ostream &operator<<(ostream &out, const Addition &opr)
{
    out << setprecision(2) << fixed;
    out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right << setw(2) << "=" << setw(9) << opr.perform() << endl;
    return out;
}
