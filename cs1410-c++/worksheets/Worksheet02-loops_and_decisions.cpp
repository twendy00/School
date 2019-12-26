
#include <iostream>
using namespace std;

cout << "Welcome to C++ programming!" << endl;

for(int i = 1; i <= 12; i++){
  cout << "Welcome to C++ programming!" << endl;
}



for (int i=12; i > 0; i--) {
    cout << "Welcome to C++ programming!" << endl;
}

// Counting up
for(int i = 0; i < 10; i++){
  cout << i;
}
cout << endl;

for(int k = 0; k < 4; k++){
  cout << "Hi" << endl;
}

// Counting down
for(int j = 10; j > 0; j--){
  cout << j;
}
cout << endl;

// Counting up
int i = 0;
while(i < 10){
  cout << i; 
  i++; 
}
cout << endl;

int k = 0;
while(k < 4){
  cout << "Hi\n"; 
  k++; 
}

// Counting down
int j = 10;
while(j >= 1){
  cout << j; 
  j--; 
}

// Counting up
i = 0; 
do{ 
  cout << i; 
  i++;
} while(i < 10);
cout << endl;

k = 0; 
do{
  cout << "Hi\n"; 
  k++;
} while(k < 4);

// Counting down
j = 10; 
do{
  cout << j; 
  j--;
} while(j >= 1);

cout << "x" << "2*x" << "3*x" << "4*x" << "5*x" << endl;
for(int x = 1; x <= 5; x++){
  cout << x;
  for(int y = 2; y <= 5; y++){
      cout << x * y;
  }
  
  cout << endl;
}

#include <iomanip>
cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
for(int x = 1; x <= 5; x++){
  cout << setw(4) << x;
  for(int y = 2; y <= 5; y++){
      cout << setw(6) << x * y;
  }
  
  cout << endl;
}

//TODO

int x = 1;
int y = 2;

cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) << "3*x" << setw(6) << "4*x" << setw(6) << "5*x" << endl; 
while (x < 6) {
    cout << setw(4) << x;
    y = 2;
    while (y < 6) {
        cout << setw(6) << x * y;
        y++;
    }
    cout << endl;
    x++;
}
   


//TODO

x = 1;
y = 2;

cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) << "3*x" << setw(6) << "4*x" << setw(6) << "5*x" << endl; 
do  {
    cout << setw(4) << x;
    y = 2;
    do  {
        cout << setw(6) << x * y;
        y++;
    } while (y < 6);
    cout << endl;
    x++;
} while (x < 6);

double x, y;
cout << "Enter two decimal members: ";
cin >> x >> y;

if(y > x){
  cout << "Minimum: " << x << endl;
}else{
  cout << "Minimum: " << y << endl;
}

cout << "Enter two decimal members: ";
cin >> x >> y;

cout << setw(9) << "x" << setw(9) << "y" << setw(12) << "Minimum" << endl;
cout << setw(9) << x << setw(9) << y;
if(y > x){
  cout << setw(12) << x << endl;
}else{
  cout << setw(12) << y << endl;
}

//TODO

cout << "Enter two decimal members: ";
cin >> x >> y;

cout << setw(9) << "x" << setw(9) << "y" << setw(12) << "Minimum" << setw(12) << "Maximum" << endl;
cout << setw(9) << x << setw(9) << y;
if(y > x){
  cout << setw(12) << x ;
}else{
  cout << setw(12) << y ;
}
if (y > x) {
    cout << setw(12) << y << endl;
}else {
    cout << setw(12) << x << endl;
}

int day;
cout << "Enter a day number (between 1 and 7):" << endl;
cin >> day;

if (day == 1){ cout << "Sunday"; }
else if (day == 2){ cout << "Monday"; }
else if (day == 3){ cout << "Tuesday"; }
else if (day == 4){ cout << "Wednesday"; }
else if (day == 5){ cout << "Thursday"; }
else if (day == 6){ cout << "Friday"; }
else if (day == 7){ cout << "Saturday"; }
else { cout << "invalid day"; }

//cout << "Day of the week is " << name << endl;

//TODO

cout << "Enter a day number (between 1 and 7):" << endl;
cin >> day;

cout << setw(6) << "Num" << setw(12) << "Day"<< endl;
if (day == 1){ cout << setw(6) << day << setw(12) << "Sunday"; }
else if (day == 2){ cout << setw(6) << day << setw(12) << "Monday"; }
else if (day == 3){ cout << setw(6) << day << setw(12) << "Tuesday"; }
else if (day == 4){ cout << setw(6) << day << setw(12) << "Wednesday"; }
else if (day == 5){ cout << setw(6) << day << setw(12) <<"Thursday"; }
else if (day == 6){ cout << setw(6) << day << setw(12) << "Friday"; }
else if (day == 7){cout << setw(6) << day << setw(12) << "Saturday"; }
else { cout << "invalid day"; }

cout << "Enter a day number(between 1 and 7):" << endl;
cin >> day;
switch(day){
case 1:  
    cout << "Sunday"; break;
case 2:  
    cout << "Monday"; break;
case 3: 
    cout << "Tuesday"; break;
case 4:  
    cout << "Wednesday"; break;
case 5:  
    cout << "Thursday"; break;
case 6:  
    cout << "Friday"; break;
case 7:  
    cout << "Saturday"; break;
default: 
    cout << "invalid day";
}

//TODO
cout << "Enter a day number(between 1 and 7):" << endl;
cin >> day;
switch(day){
case 1:  
    cout << "Weekend"; break;
case 2:  
    cout << "Weekday"; break;
case 3: 
    cout << "Weekday"; break;
case 4:  
    cout << "Weekday"; break;
case 5:  
    cout << "Weekday"; break;
case 6:  
    cout << "Weekday"; break;
case 7:  
    cout << "Weekend"; break;
default: 
    cout << "invalid day";
}


