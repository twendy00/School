#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H

#include <iostream>
using namespace std;

class StringBuilder
{
    // Declares private variable content
private:
    string content;

public:
    // Declares constructors and destructors
    StringBuilder();
    StringBuilder(const string &str);
    ~StringBuilder();

    // Declares member implementations and operators
    const string &str() const;
    void setstr(const string &setContent);
    void operator*(unsigned int n);
    bool operator==(StringBuilder &sb);
    bool operator!=(StringBuilder &sb);

    // Declares friend implementations and operators
    friend void operator>>(string str, StringBuilder &sb);
    friend ostream &operator<<(ostream &out, StringBuilder &sb);
};

#endif