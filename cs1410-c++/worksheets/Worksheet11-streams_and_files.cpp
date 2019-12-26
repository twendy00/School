
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

cout << "Welcome to C++";
cerr << "An error has happened";

#include <fstream>

ofstream out("hello.txt");

out << "Hello World!" << endl;

out.close();

cout << "Enter your first name: ";
string name;
cin >> name;

ofstream out2("hello.txt", ios::app);
out2 << "Welcome " << name << " to C++ programming!" << endl;
out2.close();

//TODO

cout << "Enter some words: ";
string words;
cin >> words;

ofstream o("words.txt", ios::app);
o << words << endl;
o.close();

//TODO
cout << "Enter two more words: ";
string w;

for (int i = 0; i < 2; i++) {
    cin >> w;
    
    ofstream o("words.txt", ios::app);
    o << w << endl;
    o.close();
}

ofstream mt_out("multable.txt");
mt_out << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
for(int x = 1; x <= 5; x++){
  mt_out << setw(4) << x;
  for(int y = 2; y <= 5; y++){
      mt_out << setw(6) << x * y;
  }
  
  mt_out << endl;
}
mt_out.close();

//TODO
#include <array>

cout << "Enter a year:";
long int year;
string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
cin >> year;

if (year % 4 == 0){
    days[1] = 29;
} else {
    days[1] = 28;
}

ofstream out("daysNmonths.txt", ios::app);
out << setw(6) << "YEAR" << setw(12) << "MONTH" << setw(8) << "DAYS" << endl;
for (int i=0; i<12; i++){
    out << setw(6) << year << setw(12) << month[i] << setw(8) << days[i] << endl;
}

out.close();

ifstream in("multable.txt");
string line;

while(getline(in, line)){
    cout << line << endl;
}

in.close();

ifstream mt_in("multable.txt");
string hx, h2x, h3x, h4x, h5x; // one per header; five headers total.
int x, x2, x3, x4, x5; // one per value per row: five values per row total;

// Read the headers
mt_in >> hx >> h2x >> h3x >> h4x >> h5x;
// Outout the headers
cout << setw(4) << hx << setw(6) << h2x << setw(6) << h3x << setw(6) << h4x << setw(6) << h5x << endl;

// Read and output the numbers one row at a time
while(mt_in >> x >> x2 >> x3 >> x4 >> x5){
    cout << setw(4) << x << setw(6) << x2 << setw(6) << x3 << setw(6) << x4 << setw(6) << x5 << endl;
}

mt_in.close();

//TODO

ifstream i("daysNmonths.txt");
string d1, d2, d3; 
int y, d;
string m;


i >> d1 >> d2 >> d3;

cout << setw(6) << d1 << setw(12) << d2 << setw(8) << d3 << endl;

while(i >> y >> m >> d){
    cout << setw(6) << y << setw(12) << m << setw(8) << d << endl;
}

i.close();

ifstream h_in("hello.txt");
string text;
while(!h_in.eof()){
    getline(h_in, text);
    if(h_in.good()){
         cout << text << endl;
    }
}
h_in.close();

cout << setfill('.');
cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
for(int x = 1; x <= 5; x++){
  cout << setw(4) << x;
  for(int y = 2; y <= 5; y++){
      cout << setw(6) << x * y;
  }
  
  cout << endl;
}

cout << setfill(' ');

for(double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
}

cout << setprecision(4);
for(double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
}

cout << setprecision(4) << fixed;
for(double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
}

cout << resetiosflags(ios::fixed);

for(int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
}

cout << left;
for(int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
}

cout << right;
for(int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
}

cout << left << setw(6) << "DEC"
     << setw(6) << "OCT"
     << setw(6) << "hex"
     << setw(6) << "HEX" << endl;

for(int i = 1; i <= 20; i += 2){
  cout << setw(6) << dec << i
       << setw(6) << oct << i
       << setw(6) << nouppercase << hex << i
       << setw(6) << uppercase << hex << i << endl;
}

//TODO

ofstream o("numbers.txt", ios::app);
o << left << setw(6) << "DEC"
     << setw(6) << "OCT"
     << setw(6) << "hex"
     << setw(6) << "HEX" << endl;

for(int i = 1; i <= 20; i += 2){
  o << setw(6) << dec << i
       << setw(6) << oct << i
       << setw(6) << nouppercase << hex << i
       << setw(6) << uppercase << hex << i << endl;
}

o.close();

struct Color {
    int r, g, b;
    string name;
};

Color rainbow[] = {
    {255, 0, 0, "Red"},
    {255, 127, 0, "Orange"},
    {255, 255, 0, "Yello"},
    {0, 255, 0, "Green"},
    {0, 0, 255, "Blue"},
    {75, 0, 130, "Indigo"},
    {143, 0, 255, "Violet"}
};


cout << left << setw(10) << "COLOR" << ' ' << setw(11) 
     << "DECIMAL(rgb)" << setw(10) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
cout << right << setfill('=') << setw(11) << "= " 
     << setfill('=') << setw(22) << "= " 
     << setfill('=') << setw(17) << "= " << endl;

for(Color c : rainbow){
    cout << left << setfill('.') << setw(10) << c.name << ' '
         << dec << setfill(' ') << right << setw(3) << c.r // Decimal
         << right << setw(4) << c.g
         << right << setw(4) << c.b << ' '
         << hex << setfill('.') << right << setw(10) << ' ' << setfill(' ') <<  left << setw(3) << c.r // Hexadecimal
         << setfill(' ') << setw(3) << c.g
         << setw(3) << c.b
         << endl;
}

//TODO

cout << left << setw(10) << "COLOR" << ' ' << setw(11) 
     << "DECIMAL(rgb)" << setw(10) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
cout << right << setfill('=') << setw(11) << "= " 
     << setfill('=') << setw(22) << "= " 
     << setfill('=') << setw(17) << "= " << endl;

for(Color c : rainbow){
    cout << left << setfill('_') << setw(10) << c.name << ' '
         << dec << setfill(' ') << left << setw(3) << c.r // Decimal
         << left << setw(4) << c.g
         << left << setw(4) << c.b << ' '
         << hex << setfill('_') << right << setw(10) << ' ' << setfill(' ') <<  right << setw(3) << c.r // Hexadecimal
         << setfill(' ') << setw(3) << c.g
         << setw(3) << c.b
         << endl;
}

//TODO

ofstream out2("rainbow.txt", ios::app);

out2 << left << setw(10) << "COLOR" << ' ' << setw(11) 
     << "DECIMAL(rgb)" << setw(10) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
out2 << right << setfill('=') << setw(11) << "= " 
     << setfill('=') << setw(22) << "= " 
     << setfill('=') << setw(17) << "= " << endl;

for(Color c : rainbow){
    out2 << left << setfill('_') << setw(10) << c.name << ' '
         << dec << setfill(' ') << left << setw(3) << c.r // Decimal
         << left << setw(4) << c.g
         << left << setw(4) << c.b << ' '
         << hex << setfill('_') << right << setw(10) << ' ' << setfill(' ') <<  right << setw(3) << c.r // Hexadecimal
         << setfill(' ') << setw(3) << c.g
         << setw(3) << c.b
         << endl;
}

out2.close();


