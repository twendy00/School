
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int var1 = 11;
int var2 = 22;
int var3 = 33;
double dvar = 45.78;

cout << &var1 << endl
     << &var2 << endl    
     << &var3 << endl;

int &ref = var1; // Reference
cout << &var1 << endl; // Address of
cout << ref << endl;

int *iptr; // A pointer to a location that holds an integer
double* dptr; // A pointer to a location that holds a double
char * ptr; // A pointer to a location that holds a character

iptr = &var1;
dptr = &dvar;

ptr = nullptr;

char choice = 'A';
char *cptr = &choice;

cout << *cptr << endl;
*cptr = 'Z';
cout << choice;

string greeting = "Good afternoon!";
short height = 39;
double distance_one = 21.07;
int count_one = 99; 

//TODO

string *gptr;
short *hptr;
double *ddptr;
int *countptr;

gptr = &greeting;
hptr = &height;
ddptr = &distance_one;
countptr = &count_one;

//TODO

*gptr = "Happy Birthday!";
*hptr = 314;
*ddptr = 9.87;
*countptr = 27;

int primes[] = {2, 3, 5, 7};
for(int i = 0; i < 4; i++){
    cout << primes[i] << endl;
}

cout << setw(12)<< "LOCATION" << setw(8) << "VALUE" << endl;
for(int i = 0; i < 4; i++){
   cout <<  setw(12)<< (primes + i) << setw(8) << *(primes + i) << endl;
 }

primes = &var1;

//TODO

string utahCounties[] = {"Beaver",
"Box Elder",
"Cache",
"Carbon",
"Daggett",
"Davis",
"Duchesne",
"Emery",
"Garfield",
"Grand",
"Iron",
"Juab",
"Kane",
"Millard",
"Morgan",
"Piute",
"Rich",
"Salt Lake",
"San Juan",
"Sanpete",
"Sevier",
"Summit",
"Tooele",
"Uintah",
"Utah",
"Wasatch",
"Washington",
"Wayne",
"Weber"};

for (string county : utahCounties) {
    cout << county << ", " << (utahCounties + 1) << endl;
}

double centimizeByVal(double len){ 
    return len * 2.54; 
}

void centimizeByRef(double& len){ 
    len = len * 2.54; 
}

void centimizeByPtr(double* len){ 
    *len = *len * 2.54; 
}

double n = 11;
cout << n << endl;
cout << centimizeByVal(n) << endl << n << "\n\n";

centimizeByRef(n);
cout << n << endl;

n = 12; cout << "\n" << n << endl;
centimizeByPtr(&n);
cout << n << endl;

//TODO: definition
void swapValues(double *xptr, double *yptr){
    double test = *xptr;
    *xptr = *yptr;
    *yptr = test;
}

//TODO: testing

double x = 1.1;
double y = 2.2;

cout << "Before Swapping Values" << endl;
cout << x << ", " << y << endl;

swapValues(&x, &y);
cout << "After Swapping Values" << endl;
cout << x << ", " << y << endl;

// Definition
void swapValues2(int* ptr){
 int temp = *ptr;
 *ptr = *(ptr + 1);
 *(ptr + 1) = temp;
}

// Testing
int vals[] = {11, 17};

cout << "Initially:" << endl;
cout << *vals << ", " << *(vals + 1) << endl;

swapValues2(vals);
cout << "After swapValues2:" << endl;
cout << *vals << ", " << *(vals + 1) << endl;

#include <vector>
int xvar;
string str = "Good morning!";
double scores[100];
vector<char> choices;

double* score = new double;

cout << "Enter score:" << endl;
cin >> *score;

cout << "The entered score is " << *score << " is stored at " << score << endl;

// Cleaning after score
delete score;

int *numbers = new int[5];

for(int i = 0; i < 5; i++){
    cout << "Enter number "<< i + 1 << ": ";
    cin >> numbers[i];
}

cout << setw(8) << "INDEX" << setw(10) << "NUMBER" << endl;

for(int i = 0; i < 5; i++){
    cout << setw(8) << i << setw(10) << numbers[i] << endl;
}

// Clean after numbers; return them to the OS
delete[] numbers;

//TODO

float *pptr = new float;
cout << "Enter in a value" << endl;
cin >> *pptr;
cout << "You entered " << *pptr << ".";

delete pptr;

struct Time {
    int hrs;
    int min;
    int sec; 
};

Time *t = new Time;

(*t).hrs = 11;
(*t).min = 45;
(*t).sec = 17;

cout << (*t).hrs << ":" << (*t).min << ":" << (*t).sec << endl;

t->hrs = 11;
t->min = 45;
t->sec = 17;

cout << t->hrs << ":" << t->min << ":" << t->sec << endl;

delete t;

//TODO

Time *t1 = new Time[10];

delete[] t1;


