
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int oddNumbers[10];
double bets[100];
string tweets[12];

int primesUnder10[4] = {2, 3, 5, 7};
char letterGrades[] = {'A', 'B', 'C', 'D', 'E'};
string days[] {  // as of C++11, the = is not required.
    "sun", "mon", "tue", 
    "wed", "thu", "fri", "sat" 
};

//TODO: define an integer array named evenNumbers and initialize it to the even numbers between 5 and 25

int evenNumbers[] {6, 8, 10, 12, 14, 16, 18, 20, 22, 24};


//TODO: define a double array named scores and initialize it to 10 random decimals between 1 and 100.

double scores[] {4.8, 10.2, 29.36, 37.18, 40.1, 50.86, 75.0, 99.999, 87.16, 0.23};



int primes[] = { 2, 3, 5, 7 };
cout << primes[0] << endl; // first element
cout << primes[3] << endl; // fourth element
char grades[] = { 'A', 'B', 'C', 'F'}; 
cout << grades[2] << endl;
cout << grades[1] << endl;

cout << grades[7] << endl;

//TODO

cout << "Even Numbers: " << endl;
for (int i=0; i<4; i++){
    cout << evenNumbers[i] << endl;
}

cout << endl;

cout << "Scores: " << endl;
for (int j=0; j < 4; j++) {
    cout << scores[j] << endl;
}

cout << setw(3) << "Day" << setw(8) << "Index" << endl;
cout << "===========" << endl;
for (int i = 0; i < 7; i++) {
    cout << setw(3) << days[i] << setw(8) << i << endl;
}

//TODO

cout << setw(3) << "Day" << setw(8) << "Index" << endl;
cout << "===========" << endl;

int i = 0;
while (i < 7) {
    cout << setw(3) << days[i] << setw(8) << i << endl;
    i++;
}

for (string day : days) {
  cout << "Day of week: " << day << endl;
}

//TODO

for (double s : scores) {
    cout << "Score: " << s << endl;
}

struct Date {
   int day;
   int month;
   int year;
};

struct Event {
   Date from;
   Date to;
   string name;
};

Event events[15];

Event trips[] = {
    { {20, 6, 2019}, {26, 6, 2019}, "Visit to DC" },
    { {13, 8, 2019}, {21, 8, 2019}, "Trip to Europe"}
};

cout << "FROM      "  << "TO        " << "TRIP" << endl;
cout << "-----------------------------------" << endl;
for(Event e : trips){
    cout << e.from.month << '/' << e.from.day << '/' << e.from.year << " "
         << e.to.month << '/' << e.to.day << '/' << e.to.year  << " "
         << e.name << endl;
}

//TODO: 

Date date[5] = { {1, 3, 2018},
                {18, 7, 1987},
                {9, 4, 1999},
                {25, 12, 1991},
                {30, 8, 2005}
               }

#include <vector>
vector<int> numbers;

int input;
cout << "Enter integers (or any letter to stop): ";
while(cin >> input){ 
    numbers.push_back(input); 
}

for(int i = 0; i < numbers.size(); i++){
    cout << "+ " << numbers.at(i) << endl; 
}

for(int i = 0; i < numbers.size(); i++){
    cout << "- " << numbers[i] << endl; 
}

for(int m : numbers){ 
    cout << "= " << m << endl; 
}

//TODO

vector<string> courses;

string course;
cout << "Enter in the Course (Press z to Stop)" << endl;

while (cin >> course){
    if (course == "z"){
        break;
    }
    courses.push_back(course);
}

for (string c : courses) {
    cout << c << endl;
}

#include <string>

string s1("Man");
string s2 = "Beast";
string s3;

s3 = s1;
cout << s3;

s3 += " and " + s2;
cout << s3;

// s3 += " can be " + 2 + " dangerous.";

s3 += " can be " + to_string(2) + " dangerous.";
cout << s3;

//TODO

string message = "Next general election year is ";
int year = 2020;
string sentence;
sentence = message + to_string(year) + ".";
cout << sentence ;

string str = "To be or not to be";

for(int i = 0; i < str.length(); i++){
  cout << i << '\t' << str.at(i) << '\t' << str[i] << endl;
}

for(char c : str){
  cout << c << "  .  ";
}

string id, first_name;

cout << "Enter ID Number: ";
cin >> id;

cout << "Enter First Name: ";
cin >> first_name;

cout << "        ID: " << id << endl
     << "FIRST NAME: " << first_name << endl;

string full_name;

cout << "Enter ID Number: ";
cin >> id;

cin.ignore(); // To read the line break at the end of the id before we read the full name
cout << "Enter Full Name: ";
getline(cin, full_name);

cout << "       ID: " << id << endl
     << "FULL NAME: " << full_name << endl;

//TODO
string email, name;

cout << "Enter in the student's name" << endl;

getline(cin, name);

cout << "Enter in the student's email address" << endl;

cin >> email;

cout << endl;
cout << "           Email" << "          " << "Name" << endl
    << "____________________________________________" << endl
    << email << "       " << name << endl;


#include <sstream>

stringstream sout;

sout << "FROM      "  << "TO        " << "TRIP" << endl;
sout << "-----------------------------------" << endl;
for(Event e : trips){
    sout << e.from.month << '/' << e.from.day << '/' << e.from.year << " "
         << e.to.month << '/' << e.to.day << '/' << e.to.year  << " "
         << e.name << endl;
}

string dates = sout.str();

cout << dates;

//TODO

stringstream smsg;

smsg << "Next general election year is ";
smsg << year << "." << endl;

string m_str = smsg.str();
cout << m_str;


