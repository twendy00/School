#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

template <typename T>
class SafeArray {
    public:
        SafeArray(const unsigned int capacity);
        ~SafeArray();
        void item(const unsigned int index, const T value);
        T get(const unsigned int index) const;
    private:
        T* arr{ nullptr };
        unsigned int capacity{ 0 };
};

template <typename T>
SafeArray<T>::SafeArray(const unsigned int capacity){
    this->arr = new T[capacity];
    this->capacity = capacity;
}

template <typename T>
SafeArray<T>::~SafeArray() {
    delete[] arr;
}

template <typename T>
void SafeArray<T>::item(const unsigned int index, const T value){
    if (index >= capacity){
        cout << "Index is out of bounds" << endl;
        throw 1;
    }
    else {
        arr[index] = value;
    }
}

template <typename T>
int SafeArray<T>::get(const unsigned int index) const{
    return arr[index];
}

int main() {
    SafeArray<int> myObject(10);
    myObject.item(1, 1);
    myObject.item(2, 8);
    myObject.item(3, 27);
    myObject.it]'bhem(4, 64);
    myObject.item(10, 1000);

    cout << myObject.get(4) << endl;
    try {
        cout << myObject.get(22) << endl;
    }
    catch (int errorCode) {
        cout << "An error was caught" << endl;
    }

    SafeArray<string> footballTeams(10);
    footballTeams.item(1, "Real SLC");
    footballTeams.item(2, "Real Madrid");
    footballTeams.item(4, "Manchester United");

    cin.get();
    return 0;
}