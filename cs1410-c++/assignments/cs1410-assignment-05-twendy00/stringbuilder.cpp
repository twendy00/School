
#include "stringbuilder.h"
#include <iostream>

using namespace std;

// Declares and initializes constructors and destructors
StringBuilder ::StringBuilder() : content("") {}
StringBuilder ::StringBuilder(const string &str) : content(str) {}
StringBuilder ::~StringBuilder() {}

// Creates str method to return string content
const string &StringBuilder ::str() const
{
    return content;
}

// Creates multiplying method
// Uses for loop to add content string by n amount of times to itself if n is
// greater than 1
// If n is less than 1, then content string remains the same
void StringBuilder ::operator*(unsigned int n)
{
    string tmp = content;
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            content += tmp;
        }
    }
}

// Creates method that evaluates if the content in each object is the same
bool StringBuilder ::operator==(StringBuilder &sb)
{
    return this->content == sb.content;
}

// Creates method that evaluates if the content in each object is not the same
bool StringBuilder ::operator!=(StringBuilder &sb)
{
    return !(this->content == sb.content);
}

// Creates method that adds content into the string str
void operator>>(string str, StringBuilder &sb)
{
    sb.content = str;
}

// Creates method that prints out content
ostream &operator<<(ostream &out, StringBuilder &sb)
{
    out << sb.content;
    return out;
}
