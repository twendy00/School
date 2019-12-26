#include "stringbuilder.h"
#include <iostream>

using namespace std;

int main()
{
    // Declares objects for both constructors from StringBuilder
    StringBuilder s;
    StringBuilder s1("Hello!");

    // Tests that string method will return content and print
    cout << s.str() << endl;
    cout << s1.str() << endl;

    // Tests that multiplying method will add more strings by n when the
    // multiplying value n is greater than 1
    s1 * 5;
    cout << s1 << endl;

    // Tests that multiplying method will not add more strings when
    // multiplying value is less than 1
    s1 * 1;
    cout << s1 << endl;

    // Tests that both boolean methods work properly when s is blank and s1 is
    // Hello
    cout << (s == s1) << endl;
    cout << (s != s1) << endl;

    // Sets the s string equal to Cats and keeps s1 equal to Hello.
    // Tests that both boolean methods work properly
    "Cats" >> s;
    cout << (s == s1) << endl;
    cout << (s != s1) << endl;

    // Sets the s1 string equal to Cats. Tests that both boolean methods work
    // properly
    "Cats" >> s1;
    cout << (s == s1) << endl;
    cout << (s != s1) << endl;

    return 0;
}