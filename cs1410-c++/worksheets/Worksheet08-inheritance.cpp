
#include <iostream>
using namespace std;

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

Date day(8,12, 2019);
Date anotherDay = Date(9, 23, 2019);
day.showDate();
anotherDay.showDate();

Date dayCopy(day);
Date anotherDayCopy = anotherDay;
dayCopy.showDate();
anotherDayCopy.showDate();

class DistanceClass{
private:
    int feet;
    int inches;

public:
    DistanceClass(): feet(0), inches(0){}
    DistanceClass(int f, int n): feet(f), inches(n){}
    void show(){
        cout << feet << "' " << inches << "\"" << endl;
    }
};

//TODO

DistanceClass dc(5, 0);
DistanceClass dc2 = DistanceClass(4, 3);
dc.show();
dc2.show();

DistanceClass dc_copy(dc);
DistanceClass dc2_copy(dc2);
dc_copy.show();
dc2_copy.show();

DistanceClass dc_copy2 = dc;
DistanceClass dc2_copy2 = dc2;
dc_copy2.show();
dc2_copy2.show();

class DistanceClass2{
private:
    int feet;
    int inches;

public:
    DistanceClass2(): feet(0), inches(0){}
    DistanceClass2(int f, int n): feet(f), inches(n){}
    void add(const DistanceClass2& d){
        feet += d.feet + (inches + d.inches) / 12;
        inches = (inches + d.inches) % 12;
    }
    void add(int ft){
        feet += ft;
    }
    void add(int ft, int inch){
        feet += ft + (inches + inch) / 12;
        inches = (inches + inch) % 12;
    }
    
    void show(){
        cout << feet << "' " << inches << "\"" << endl;
    }
};

DistanceClass2 d1;
DistanceClass2 *d2 = new DistanceClass2(2, 5);

d1.show();
d1.add(*d2);
d1.show();
d1.add(3);
d1.show();
d1.add(0, 9);
d1.show();

delete d2;

//TODO

DistanceClass2 *dist = new DistanceClass2(14, 3);
DistanceClass2 *dist2 = new DistanceClass2(7, 0);

dist->show();
dist->add(*dist2);
dist->show();
dist2->show();
dist2->add(6);
dist2->show();


class DistanceClass3{
private:
    int feet;
    int inches;

public:
    DistanceClass3(): feet(0), inches(0){}
    DistanceClass3(int f, int n): feet(f), inches(n){}
    void add(const DistanceClass3& d){
        this->feet += d.feet + (this->inches + d.inches) / 12;
        this->inches = (this->inches + d.inches) % 12;
    }
    void add(int feet){
        this->feet += feet;
    }
    void add(int feet, int inches){
        this->feet += feet + (this->inches + inches) / 12;
        this->inches = (this->inches + inches) % 12;
    }
    
    void show(){
        cout << this->feet << "' " << this->inches << "\"" << endl;
    }
};

DistanceClass3 dist1;
DistanceClass3 *dist2 = new DistanceClass3(2, 5);

dist1.show();
dist1.add(*dist2);
dist1.show();
dist1.add(3);
dist1.show();
dist1.add(0, 9);
dist1.show();

delete dist2;

class DistanceClass4{
private:
    int feet;
    int inches;

public:
    DistanceClass4(): feet(0), inches(0){}
    DistanceClass4(int feet, int inches): feet(feet), inches(inches){}
    DistanceClass4& add(const DistanceClass4& d){
        this->feet += d.feet + (this->inches + d.inches) / 12;
        this->inches = (this->inches + d.inches) % 12;
        return *this;
    }
    DistanceClass4& add(int feet){
        this->feet += feet;
        return *this;
    }
    DistanceClass4& add(int feet, int inches){
        this->feet += feet + (this->inches + inches) / 12;
        this->inches = (this->inches + inches) % 12;
        return *this;
    }
    
    DistanceClass4& show(){
        cout << this->feet << "' " << this->inches << "\"" << endl;
        return *this;
    }
};

DistanceClass4 dst1;
DistanceClass4 *dst2 = new DistanceClass4(2, 5);

dst1.show().add(*dst2).show().add(3).show().add(0, 9).show();

class Point {
private:
    int x, y;
    
public:
    //TODO: Constructors go here
    Point(): x(0), y(0) {}
    Point(int x, int y): x(x), y(y) {}  
    
    //TODO: Move functions go here
    Point move (const Point& p) {
        this->x = p.x;
        this->y = p.y;
        return *this;
    }
    
    Point move (int x, int y) {
        this->x = x;
        this->y = y;
        return *this;
    }
    
    Point& print(){
        cout << "(" << this->x << ", " << this->y << ")" << endl;
        return *this;
    }
};

// Your Point class should make these two lines work
Point *p = new Point, *q = new Point( 20, 30);
p->print().move(*q).print().move(12, 56).print();

// Definition
class Counter {
private:
    unsigned int count;
    int step;
public:
    Counter();

    void increment();
    int current();

    ~Counter();
};

// Implemenation
Counter::Counter() : count(0), step(1) { // The constructor
    cout << "init -> count: " << count << ", step: "  << step << endl;
}

// Implemenation
void Counter::increment() { 
    count += step; 
}

// Implemenation
int Counter::current() { 
    return count; 
}

// Implemenation
Counter::~Counter() {
    cout << "fini -> count: " << count << ", step: "  << step << endl;
}

Counter *c = new Counter;

c->increment();
c->increment();
c->increment();
c->increment();
cout << c->current() << endl;

delete c;

//TODO: Class definition

class Date {
    private: 
        int month, day, year;
    public: 
        Date();
        Date(int mm, int dd, int yy);
        
        void showDate();
        
        ~Date(){};    
};

//TODO: First constructor's implemenation

Date::Date() : month(1), day(1), year(1900) {}

//TODO: Second constructor's implemenation
Date::Date(int mm, int dd, int yy) : month(mm), day(dd), year(yy) {}

//TODO: showDate implemenation
void Date::showDate() {
    cout << "The date is " << setfill('0')
        << setw(2) << month << '/'
        << setw(2) << day << '/'
        << setw(2) << year % 100 << endl;
}

class BaseCounter {
private:
     int count;
     int initial;
protected:
     int step;
public:
    BaseCounter(int i): initial(i), count(i), step(1){}
    int next(){ return count += step; }
    int prev(){ return count -= step; }
    int current(){ return count; }
    void reset(){ count = initial; }
};

class CounterDown1 : public BaseCounter {
public:
    CounterDown1(int i): BaseCounter(i){ step = -1; }
};

CounterDown1 cd1(100);
cout << cd1.next() << endl;
cout << cd1.current() << endl;
cout << cd1.prev() << endl;

//TODO: Student class

class Student {
    private:
        int id;
        string name;
    public:
        Student(int id, string name): id(id), name(name) {}
};

//TODO: CollegeStudent class

class CollegeStudent : public Student {
    protected:
        string major;
    public:
        CollegeStudent(int id, string name, string major): Student(id, name), major(major){}
};

class CounterDown2 : protected BaseCounter {
public:
    CounterDown2(int i): BaseCounter(i){ step = -1; }
};

CounterDown2 cd2(100);
cout << cd2.next() << endl;
cout << cd2.current() << endl;
cout << cd2.prev() << endl;

class CounterDown3 : private BaseCounter {
public:
    CounterDown3(int i): BaseCounter(i){ step = -1; }
};

CounterDown3 cd3(100);
cout << cd3.next() << endl;
cout << cd3.current() << endl;
cout << cd3.prev() << endl;


