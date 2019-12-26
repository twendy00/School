
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

double divide(double number, double by){
    return number / by;
}

double divide1(double number, double by){
    if(by == 0){
        throw by;
    }
        
    return number / by;
}

double m, n;

cout << "Enter a double number: ";
cin >> m;
cout << "Enter an other double number to divide " << m << " by: ";
cin >> n;
cout << m << " / "  << n << ": " << divide1(m, n) << endl;
cout << "DONE!\n";

cout << "Enter a double number: ";
cin >> m;
cout << "Enter an other double number to divide " << m << " by: ";
cin >> n;
try {
    cout << m << " / "  << n << ": " << divide1(m, n) << endl;
    cout << "DONE!\n";
}catch(double ex){
    cerr << "Exception occurred: cannot divide by zero.";
}

//TODO

class Square {
private:
    int x, y, width;
public:
    Square(int x, int y, int w): x(x), y(y), width(w){}
    void show(){
        cout << width << "x" << width << " SQUARE @(" << x << "," << y << ")";
    }
    int negative(){
    if(width < 0){
        throw width;
    }
        
    return width;
}
};

//TODO

Square s(2, 2, 2), s2(2, 2, -1);

try {
    s.negative();
    s.show();
    s2.negative();
    s2.show();
} catch(int width){
    cerr << "Exception occurred: cannot have a negative width.";
}

#include <stdexcept>
double divide2(double number, double by){
    if(by == 0){
        throw runtime_error("divide by zero");
    }
        
    return number / by;
}

cout << "Enter a double number: ";
cin >> m;
cout << "Enter an other double number to divide " << m << " by: ";
cin >> n;
try {
    cout << m << " / "  << n << ": " << divide2(m, n) << endl;
    cout << "DONE!\n";
}catch(runtime_error& ex){
    cerr << "Exception occurred: " << ex.what();
}

//TODO

class Square1 {
private:
    int x, y, width;
public:
    Square1(int x, int y, int w): x(x), y(y), width(w){}
    void show(){
        cout << width << "x" << width << " SQUARE @(" << x << "," << y << ")";
    }
    int negative(){
    if(width < 0){
        throw runtime_error("negative width");
    }
        
    return width;
}
};

class DivisionByZero : public runtime_error{
public:
    DivisionByZero(): runtime_error("divide by zero"){}
};

double divide3(double number, double by){
    if(by == 0){
        throw DivisionByZero();
    }
        
    return number / by;
}

cout << "Enter a double number: ";
cin >> m;
cout << "Enter an other double number to divide " << m << " by: ";
cin >> n;
try {
    cout << m << " / "  << n << ": " << divide3(m, n) << endl;
    cout << "DONE!\n";
}catch(DivisionByZero& ex){
    cerr << "Exception occurred: " << ex.what();
}

double lesserOf(double n, double m){
    return n < m ? n : m;
}

template<typename T>
T lesserOf(T n, T m){
    return n < m ? n : m;
}

cout << lesserOf<int>(12, 9) << endl;

cout << lesserOf<double>(1.2, 9.8) << endl;

cout << lesserOf(12, 9) << endl;
cout << lesserOf(1.2, 9.8) << endl;

//TODO: Function template goes here

template<typename T>
int compareTo(T a, T b){
    if(a > b) return 1;
    else if (a == b) return 0;
    else return -1;
}

//TODO: Function calls go here:

cout << compareTo<int>(1, 2) << endl;
cout << compareTo<double>(2.0, 1.5) << endl;
cout << compareTo<string>("10", "10") << endl;

cout << compareTo(1, 2) << endl;
cout << compareTo(2.0, 1.5) << endl;
cout << compareTo("10", "10") << endl;

template <typename T, typename S>
S find(T* data, T value, S size){
    for(S j = 0; j < size; j++){
        if(data[j] == value){
            return j;
        }
    }
    
    return -1;
}

char vowels[] = {'A', 'E', 'I', 'O', 'U', 'Y'};
cout << find(vowels, 'X', 6) << endl;             
cout << find<char, unsigned>(vowels, 'U', 6) << endl; 

vector<double> grades = {89.5, 91.0, 96.25, 75.5, 94.75};
double average = 0;
for(double grade : grades){
    average += grade / grades.size();
}

cout << "Grade average: " << average << endl;

template <typename T>
class A{
public:
    A(T a): m(a){}
    void show(){
        cout << "My number is: " << m << endl;
    }
    ~A(){}
private:
    T m;
};

A<int> a(56);
a.show();

A<double> *b = new A<double>(44.5);
b->show();

A<string> *c = new A<string>("James");
c->show();

delete b, c;

template <typename E, typename T>
class BC{
public:
    BC(E b, T c): b(b), c(c){}
    void print(){
        cout << "b: " << b << ", "
             << "c: " << c << endl;
    }
    ~BC(){}
private:
    E b;
    T c;
};

BC<int, double> bc(10, 89.05);
bc.print();

BC<string, short> *bcptr = new BC<string, short>("Washington", 10);
bcptr->print();
delete bcptr;

//TODO: class template goes here

template <typename K, typename V>

class Pair{
    public: 
        Pair(K key, V value): key(key), value(value){}
        K getKey() {
            return key;
        }
        void setKey(K k) {
            key = k;
        }
        V getValue(){
            return value;
        }
        void setValue(V v){
            value = v;
        }   
        ~Pair(){}
    private:
        K key;
        V value;
};

//TODO: object definitions go here

Pair<int, double> KV(100, 99.99);
KV.getKey();
KV.setKey(100);

Pair<char, string> KV2('A', "Apple");
cout << KV2.getValue() << endl;
KV2.setValue("Orange");
cout << KV2.getValue() << endl;

Pair<double, int> *ptr = new Pair<double, int>(99.99, 100);
cout << ptr->getValue() << endl;
ptr->setValue(10);
cout << ptr->getValue() << endl;

Pair<string, char> *ptr2 = new Pair<string, char>("Apple", 'A');
cout << ptr2->getKey() << endl;
ptr2->setKey("Banana");
cout << ptr2->getKey() << endl;

#include <array>
array<int, 2> vals = {11, 17};

template <typename T, unsigned short S> 
class OwnArray { 
private: 
    T *data; 
    int size; 
public: 
    OwnArray(): size(S), data(new T[S]){} 
    OwnArray(T *arr): OwnArray(){
        for(int i = 0; i < size; i++){
            data[i] = arr[i]; 
        } 
    } 
    void print(){
        for (int i = 0; i < size; i++){
            cout << " " << *(data + i); 
        }
        cout << endl; 
    } 
    ~OwnArray(){
        delete[] data;
    }
}; 

string arr[] = {"mam", "ma", "mia"};
OwnArray<string, 3> oa(arr);
oa.print();

template <typename T, unsigned short S> 
class OwnArray2 { 
private: 
    T *data; 
    int size; 
public: 
    OwnArray2(); 
    OwnArray2(T *arr);
    void print(); 
    ~OwnArray2();
}; 

template <typename T, unsigned short S>
OwnArray2<T,S>::OwnArray2(): size(S), data(new T[S]){} 

template <typename T, unsigned short S>
OwnArray2<T,S>::OwnArray2(T *arr): OwnArray2(){
    for(int i = 0; i < size; i++){
        data[i] = arr[i]; 
    } 
} 

template <typename T, unsigned short S>
void OwnArray2<T,S>::print(){
    for (int i = 0; i < size; i++){
        cout << " " << *(data + i); 
    }
    cout << endl; 
} 

template <typename T, unsigned short S>
OwnArray2<T,S>::~OwnArray2(){
    delete[] data;
}

OwnArray2<string, 3> ob(arr);
ob.print();

//TODO: class template definition goes here

template <typename T>
class B{
public:
    B(T a);
    void show();
    ~B();
private:
    T m;
};


//TODo: constructor implementation goes here
template <typename T>
B<T>::B(T a): m(a){} 

//TODo: show() implementation goes here
template <typename T>
void B<T>::show(){
    cout << "My number is: " << m << endl;
    }

//TODo: destructor implementation goes here

template <typename T>
B<T>::~B(){}


