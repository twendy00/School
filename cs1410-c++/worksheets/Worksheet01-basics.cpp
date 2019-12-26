
#include <iostream>

std::cout << "Hello, world!" << std::endl;

std ::  cout <<                "Hello, world!" << 
    std   ::   endl;

std::cout << "Hello, world!" << std::endl;

std::cout << "Hello, world!" << std::endl;

std::cout << "Hello, world!" << std::endl;
std::cout << "Good" << std::endl << "morning!" << std::endl;
std::cout << "Welcome\nto\nC++!!!";

std::cout << "Hello, world!" << std::endl
          << "Good" << std::endl << "morning!" << std::endl
          << "Welcome\nto\nC++!!!";

std::cout << "Hello, world!\nGood\nmorning!\n"
        << "Welcome" << std::endl
        << "to" << std::endl
        << "C++!!!";


using namespace std;
     cout << "Hello, world!" <<endl
         << "Good" <<endl << "morning!" <<endl
        << "Welcome\nto\nC++!!!";

// single line comment; until end of line.

/* 
  multi-line comment; spans
  one
  or
  more 
  lines.
*/

#include <string> // For the string message variable
int number;
double pi = 3.14;
char letter;
bool is_active = true;
string message = "Good morning!";

//TODO
int getNum;
double getDollars = 0.00;
char symbol;
bool is_alive = true;
string salutation = "Hello!";

int x, y;
cout << "Enter two integers: ";
cin >> x >> y;

cout << x << '\t' << y << endl;

double f_temp; // To be entered
double c_temp; // To be calculated

cout << "Temperature in fahrenheit:\n";
cin >> f_temp;

c_temp = (f_temp - 32) * 5.0 / 9.0; 
cout << "Temperature in Celsius is: " << c_temp << '\n';

// TODO
double radius;
const double PI = 3.14159;
double area;

cout << "Provide the radius for a circle:\n";
cin >> radius;

area = PI * (radius * radius);
cout << "The area of the circle is " << area;

//const double PI = 3.14159;

cout << 6 + 7   << endl 
     << x - 5   << endl
     << 4 * 3   << endl
     << 7 / 2   << endl    // Integer division
     << 7 % 2   << endl    // Remainder
     << 7 / 2.0 << endl;

//TODO
cout << (6 > 7) << endl
     << (7 < 5) << endl
     << (4 <= 3) << endl
     << (2 >= 7) << endl
     << (9 != 9) << endl
     << (7.1 == 2.0) << endl;

//TODO

cout << (x > 7 && x != 5) << endl;
cout << (x > 5 && x != 7) << endl;

x = 14;
y = y + x - 7;

// TODO
int ans = 27;

ans = ans + 10; 
cout << ans << ", ";
ans = ans - 7; 
cout << ans << ", ";
ans = ans * 2;
cout << ans << ", ";
ans = ans / 3;
cout << ans << ", ";
ans = ans%3; 
cout << ans << endl;

//TODO
int count = 10;

cout << "count=" << count << endl; 
cout << "count=" << --count << endl;
cout << "count=" << count << endl; 
cout << "count=" << count-- << endl;
cout << "count=" << count << endl; 


