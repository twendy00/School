
struct Date {
  int day;
  int month;
  int year;
};

//TODO
struct Time {
    int hour;
    int minute;
    int second;
};

struct Distance {
  int feet;
  double inches;
};

struct Room {
  Distance length;
  Distance width;
};

Date mlk;
Distance roomLength, roomWidth;
Room living;

mlk.day = 15;
mlk.month = 1;
mlk.year = 2019;

Date mlk_day = {15, 1, 2019};

#include <iostream>
using namespace std;

cout << mlk_day.year << '-' << mlk_day.month << '-' << mlk_day.day << endl;

Room bedroom = { { 12, 4}, { 16, 0} };

cout << "length = " << bedroom.length.feet << "' " << bedroom.length.inches << '"' << endl;
cout << "width = " << bedroom.width.feet << "' " << bedroom.width.inches << '"' << endl;

// TODO: define a date variable named 'today' and initialize it to today's values.

/*
struct Date_v2 {
    int day;
    string month;
    int year;
}; */

Date today = {9, 7, 2019};

// TODO: print the values of this variable.
cout << today.month << "-" << today.day << "-" << today.year << endl;


// TODO: define a time variable named 'noon' and initialize it to time 12:00:00. Use the
//       Time structure you created for the previous CODING CHALLENGE. 

Time noon = {12, 00, 00};

// TODO: print the values of this variable.

cout << noon.hour << ":" << noon.minute << ":" << noon.second << endl;


// TODO: define a distance variable named 'height' and initialize it to 10 feet and 7 inches.
Distance height = {10, 7};

// TODO: print the values of this variable.
cout << height.feet << "' " << height.inches << "\"" << endl;


enum DayOfWeek {
 SUN, MON, TUE, WED, THU, FRI, SAT
};

DayOfWeek tomorrow = WED;

cout << "Tomorrow is: " << tomorrow << endl;

enum CustomDayOfWeek {
 SUN = 1, MON, TUE, WED, THU, FRI, SAT
};

CustomDayOfWeek a_day = WED;
cout << "A day is: " << a_day << endl;

CustomDayOfWeek a_day = CustomDayOfWeek::WED;
cout << "A day is: " << a_day << endl;

enum class DayOfWeek_2 {
 SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

DayOfWeek_2 day_2 = WEDNESDAY;

DayOfWeek_2 day_2 = DayOfWeek_2::WEDNESDAY;

//TODO: define enumeration
enum class MoneyChange {PENNY, NICKEL, DIME, QUARTER};


//TODO: define an enmeration variable named change

MoneyChange change = MoneyChange::DIME;


if(day_2 == DayOfWeek_2::SATURDAY || day_2 == DayOfWeek_2::SUNDAY){
    cout << "It is weekend" << endl;
} else {
    cout << "It is a weekday" << endl;
}

switch(day_2){
    case DayOfWeek_2::SUNDAY: cout << "Sunday"; break;
    case DayOfWeek_2::MONDAY: cout <<  "Monday"; break;
    case DayOfWeek_2::TUESDAY: cout <<  "Tuesday"; break;
    case DayOfWeek_2::WEDNESDAY: cout <<  "Wednesday"; break;
    case DayOfWeek_2::THURSDAY: cout <<  "Thursday"; break;
    case DayOfWeek_2::FRIDAY: cout <<  "Friday"; break;
    case DayOfWeek_2::SATURDAY: cout <<  "Saturday"; break;
}

void nameDayOfWeek(DayOfWeek_2 d){
    switch(d){
        case DayOfWeek_2::SUNDAY: cout << "Sunday"; break;
        case DayOfWeek_2::MONDAY: cout <<  "Monday"; break;
        case DayOfWeek_2::TUESDAY: cout <<  "Tuesday"; break;
        case DayOfWeek_2::WEDNESDAY: cout <<  "Wednesday"; break;
        case DayOfWeek_2::THURSDAY: cout <<  "Thursday"; break;
        case DayOfWeek_2::FRIDAY: cout <<  "Friday"; break;
        case DayOfWeek_2::SATURDAY: cout <<  "Saturday"; break;
    }
} 

cout << "day_2 is ";
nameDayOfWeek(day_2);

enum class Bill {
  HUNDRET = 100, FIFTY = 50,
  TWENTY = 20, TEN = 10, 
  FIVE = 5, ONE = 1
};

struct Amount {
  int number;
  Bill kind;
};

//Amount firstHundred = { 5, Bill::TWENTY };

//TODO

Amount firstHundred_ = {20, Bill::FIVE};
Amount secondHundred = {100, Bill::ONE};
Amount thirdHundred = {10, Bill::TEN};
Amount fourthHundred = {2, Bill::FIFTY};
Amount fifthHundred = {1, Bill::HUNDRET};


