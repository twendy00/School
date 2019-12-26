#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <addition.h>
#include <subtraction.h>
#include <multiplication.h>
#include <division.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declares variables
    string line;
    double left, right, total;
    char symbol, equal;

    // Declares in and out streams to pull in and read from operations-in.txt and
    // to print out to operations-out.txt
    ifstream in("operations-in.txt");
    ofstream out("operations-out.txt");

    // While function to read through the file until there are no more lines
    while (in >> symbol >> left >> right)
    {
        // Declares heap pointers based on arithmetic function
        Addition *add = new Addition(left, right);
        Subtraction *sub = new Subtraction(left, right);
        Multiplication *mult = new Multiplication(left, right);
        Division *div = new Division(left, right);

        // Switch statement to determine the symbol in the file, and based on the
        // symbol, the applicable pointer and function will run to calculate and print
        // out the results as found in the various cpp implementation files.
        // Results are both printed out and saved in the text output file.
        switch (symbol)
        {
        case '+':
            cout << *add;
            out << *add;
            break;
        case '-':
            cout << *sub;
            out << *sub;
            break;
        case '*':
            cout << *mult;
            out << *mult;
            break;
        case '/':
            cout << *div;
            out << *div;
            break;
        default:
            break;
        }

        // Heap pointers deleted from memory
        delete add;
        delete sub;
        delete mult;
        delete div;
    }

    // Files closed
    in.close();
    out.close();

    return 0;
}
