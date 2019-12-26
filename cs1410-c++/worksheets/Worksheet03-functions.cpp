
#include <iostream>
using namespace std;

void printStars(int n){
  for(int i = 0; i < n; i++){
    cout << '*';
  }
  cout << endl;
}

printStars(69);
printStars(37);
printStars(5);
printStars(45);

void printStars(int n);

bool isOdd(int x){
    return x % 2 != 0;
}

bool isEven(int x){
    return !isOdd(x);
}

//TODO
bool isOdd(int x);
bool isEven(int x);

#include <iomanip>
cout << setw(8) << "Number" << setw(6) << "Odd?"    << setw(7) << "Even?"    << endl;
cout << setw(8) << 97       << setw(6) << isOdd(97) << setw(7) << isEven(97) << endl;
cout << setw(8) << 34       << setw(6) << isOdd(34) << setw(7) << isEven(34) << endl;

int minimum(int x, int y);

//TODO: Function definition
int minimum(int x, int y) {
    int minResult = min(x,y);
 return minResult;
}


//TODO: Call this function to find the minimum of 46 and 38
cout << minimum(46, 38) << endl;


double lbs2kgs(double);

double lbs2kgs(double pounds){
  double kilograms =  0.453592 * pounds;
  return kilograms;
}

double lbs, kgs;

cout << "Enter weight in pounds:\n"; cin >> lbs;
kgs = lbs2kgs(lbs);
cout << "Weight in kilograms: " << kgs << endl;

// TODO: function prototype
double kgs2lbs(double);

// TODO: function definition
double kgs2lbs(double kilos) {
    double lbs = kilos / 0.453592;
    return lbs;
}

// TODO: testing the function

double kilos, pounds;

cout << "Enter weight in kilograms:\n"; cin >> kilos;
pounds = kgs2lbs(kilos);
cout << "Weight in pounds: " << pounds << endl;

int incrementBy2(int n){
  return ++(++n);
}

int n = 15;

cout << "n = " << n << endl;
cout << "n = " << incrementBy2(n) << endl;
cout << "n = " << n << endl;

int x = 9;
int& y = x;

y = 17;
cout << x;

// Prototype
void swapValues(int&, int&);

// Definition
void swapValues(int& n, int& m){
  int o = n;
  n = m;
  m = o;
}

// Testing
int a = 10;
int b = 15;

cout << "a = " << a << ", b = " << b << endl;
swapValues(a, b);
cout << "a = " << a << ", b = " << b << endl;

//TODO: definition
void swapValues(double& d, double& e) {
    double f = e;
    e = d;
    d = f;
}

//TODO: testing
double v = 1;
double u = 2;

cout << "v = " << v << ", u = " << u << endl;
swapValues(v, u);
cout << "v = " << v << ", u = " << u << endl;


