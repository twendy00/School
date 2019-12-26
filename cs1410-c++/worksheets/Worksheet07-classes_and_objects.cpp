
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SimpleClass {
private:
  int someData;

public:
  void setData(int d){ 
      someData = d; 
  }
    
  void showData(){
    cout << "Data is " << someData << endl;
  }  
};

SimpleClass s1, s2; // Creating two objects

s1.setData(500);
s2.setData(187);
s1.showData();
s2.showData();

cout << s1.someData;
cout << s2.someData;

//TODO

class MyFirstClass {
    
    private: 
        int number; 
        string message;

    public:
        void setNumber(int n) {
           number = n;
       }

        void showNumber() {
            cout << "The number is " << number << "." << endl;
        }

        void setMessage(string m) {
            message = m;
        }

        void showMessage() {
            cout << "The message is " << message << "." << endl;
        }
};

//TODO

MyFirstClass n1, m1;

n1.setNumber(26);
n1.showNumber();
m1.setMessage("Hello");
m1.showMessage();

//TODO
class Time {
    public:
        int hrs;
        int min;
        int sec;
};

class DateClass {
private:
    int month, day, year;
public:
    void setDate(int mm, int dd, int yyyy){
        month = mm;
        day = dd;
        year = yyyy;
    }

    void showDate() {
        cout << "The date is " << setfill('0')
             << setw(2) << month << '/'
             << setw(2) << day << '/'
             << setw(2) << year % 100 << endl;
    }
};

DateClass d;
d.setDate(10, 12, 2018);
d.showDate();

class Counter {
private:
    unsigned int count;
    int step;
public:
    Counter() : count(0), step(1) { // The constructor
        cout << "init -> count: " << count << ", step: "  << step << endl;
    }

    void increment() { 
        count += step; 
    }
    
    int current() { 
        return count; 
    }

    ~Counter() { // The destructor
        cout << "fini -> count: " << count << ", step: "  << step << endl;
    }
};

Counter c;
c.increment();
c.increment();
c.increment();
c.increment();

Counter *cptr = new Counter;
cptr->increment();
cptr->increment();
cptr->increment();
cptr->increment();

//TODO

class DateClass2 {
    private:
        int month, day, year;
    
    public:
        DateClass2() : month(1), day(1), year(1990){};
    
        void setDate(int mm, int dd, int yyyy){
            month = mm;
            day = dd;
            year = yyyy;
        }

        void showDate() {
            cout << "The date is " << setfill('0')
                 << setw(2) << month << '/'
                 << setw(2) << day << '/'
                 << setw(2) << year % 100 << endl;
        }
};

DateClass2 dc;
dc.showDate();

DateClass2* dcptr = new DateClass2;
dcptr-> showDate();

{
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    c.increment();
}

Counter *c2 = new Counter;

c2->increment();
c2->increment();
c2->increment();

delete c2;

class Date {
private:
    int month, day, year;
public:
    Date() : month(1), day(1), year(1900) {} // Constructor # 1
    Date(int mm, int dd, int yy) : month(mm), day(dd), year(yy) {}  // Constructor # 2

    void showDate() {
        cout << "The date is " << setfill('0')
             << setw(2) << month << '/'
             << setw(2) << day << '/'
             << setw(2) << year % 100 << endl;
    }

    ~Date(){} // Destructor
};

// Using constructor #1
Date d1;
d1.showDate();

// Using constructor #2
Date d2(2, 17, 2019);
d2.showDate();

// Using constructor #1
Date *d3 = new Date;
d3->showDate();

// Using constructor #1
Date *d4 = new Date(2, 17, 2019);
d4->showDate();

delete d3, d4;

//TODO
class Employee {
    private:
        int id;
        string name;
        short int age;
    public:
        Employee() : id(0), name("noname"), age(18) {};
        Employee(int id) : id(id), name("noname"), age(18)  {};
        Employee(int id, string n) : id(id), name(n), age(18) {};
        Employee(int id, string n, short int a) :  id(id), name(n), age(a){};
    
        void print() {
            cout << "Id: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

//TODO
Employee e1, e2(111), e3(112, "Jane Doe"), e4(113, "Jackie Doe", 22);

e1.print(); //110, "Jan Doe", 54
e2.print(); //, "Janie Doe", 38
e3.print(); //, 18
e4.print();

//TODO
Employee* eptr = new Employee();
Employee* eptr2 = new Employee(111);
Employee* eptr3 = new Employee(113, "Jan Doe");
Employee* eptr4 = new Employee(113, "Jan Doe", 54);

eptr->print();
eptr2->print();
eptr3->print();
eptr4->print();

class BetterCounter{
private:
    unsigned count; int step;
public:
    BetterCounter() : count(0), step(1){} // Constructor # 1
    BetterCounter(unsigned c) : count(c), step(1){} // Constructor # 2
    BetterCounter(unsigned c, int s) : count(c), step(s){} // Constructor # 3
    
    void increment(){ count = count + step; }
    int current(){ return count; }
    
    ~BetterCounter(){} // // Destructor
};

BetterCounter* bc = new BetterCounter(11);
bc->increment();
cout << bc->current();
delete bc;

class Date2 {
private:
    int month, day, year;
public:
    Date2() : month(1), day(1), year(1900) {} // Constructor # 1
    Date2(int mm, int dd, int yy) : month(mm), day(dd), year(yy) {}  // Constructor # 2

    void showDate() const; // A const function prototype

    ~Date2(){} // Destructor
};

// A const function definition
void Date2::showDate() const {
    cout << "The date is " << setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100 << endl;
}

class Card {
private:
    long cardNumber;
    string cardName;
    bool active;

public:
    long getCardNumber() const {
        return cardNumber;
    }

    const string& getCardName() const {
        return cardName;
    }

    bool isActive() const {
        return active;
    }
};

class AnotherCard {
private:
    long cardNumber;
    string cardName;
    bool active;

public:
    void setCardNumber(long number) {
        cardNumber = number;
    }

    void setCardName(const string &name) {
        cardName = name;
    }

    void setActive(bool active) {
        AnotherCard::active = active;
    }
};




