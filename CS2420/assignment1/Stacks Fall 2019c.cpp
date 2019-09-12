//g++ -std=c++17 'Stacks Fall 2019c.cpp' -o 'Stacks Fall 2019c'
//"./Stacks Fall 2019c"

//Copyright 2019, Bradley Peterson, Weber State University, All rights reserved.
#include <iostream>
#include <string>
#include <cstdio>


using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;


//These two base classes help the assignment compile and run without any changes.  
//Dot not modify these.  You will instead override the methods in the derived classes below.
template <typename T>
class BaseStack {
public:
  BaseStack() {}                                   //These methods just contain filler code to help the code compile on the initial run. 
  BaseStack(const unsigned int size) {}            //In the derived classes below, you will be overriding these with your own versions. 
  unsigned int size() const { return 0; }
  void push(const T& item) {}
  T top() const { T temp{}; return temp; }
  void pop() { }
  void popSecondFromTop() { }
  void pushUnderTop(const T& item) { }
  T topSecondFromTop() const { T temp{}; return temp; }
  T& operator[](const unsigned int itemNumber) { T temp{}; return temp; }

protected:
  T* arr { nullptr };                                     // Note that to refer to this in a base class, you will usually need to 
                                                        // say "this->arr" instead of just "arr" (depends on the compiler)
};

//**********************************
//Write your code below here
//**********************************
template <typename T>
class StackForCS2420 : public BaseStack<T> {
public:
StackForCS2420(const unsigned int size);
  unsigned int size() const;
  void push(const T& item) ;
  T top() const;
  void pop();
  void popSecondFromTop();
  void pushUnderTop(const T& item);
  T topSecondFromTop() const;
  T& operator[](const unsigned int itemNumber);

private:
  unsigned int index;
  unsigned int capacity;
};

 
template <typename T>
StackForCS2420<T>::StackForCS2420(const unsigned int size) {
    this->arr = new T[size];
    index = 0;
    capacity = size;
}

template <typename T>
unsigned int StackForCS2420<T>::size() const {
    return index;
  }

template <typename T>
void StackForCS2420<T>::push(const T& item) {
    if (index == capacity){
      cout << "Array is already at capacity." << endl;
      return;
    }
    this->arr[index] = item;
    index++;
  }

template <typename T>
void StackForCS2420<T>::pop() { 
    index--;
  }

template <typename T>
T StackForCS2420<T>::top() const { 
    if (index <= 0) {
      cout << "Am I supposed to write something with the throw?" << endl;
      throw 1;
    }
    return this->arr[index-1]; 
  }

// Removes the second number from the top aka moves the index to the one below capacity
// If there is nothing below the capacity (so index doesn't exist) then... do a try catch error?

template <typename T>
void StackForCS2420<T>::popSecondFromTop() { 
  // if (index-2 <= 0 || index - 2 > capacity) {
  //   cout << "More messages" << endl;
  //   throw 1;
  // } 
    //this->arr[index-2] = this->arr[index-1];
    index-2;
  }

template <typename T>
void StackForCS2420<T>::pushUnderTop(const T& item) {
    this->arr[index+1] = this->arr[index];
    this->arr[index-1] = item;
  }

template <typename T>
T StackForCS2420<T>::topSecondFromTop() const { 
      if (capacity == 0) {
        cout << "Am I supposed to write something with the throw?" << endl;
        throw 1;
    }; 
    return this->arr[capacity-1];
  }

template <typename T>
T& StackForCS2420<T>::operator[](const unsigned int itemNumber) { 
    //this->*itemNumber-index;
    return this->arr[0]; 
  } 

//**********************************
//Write your code above here
//**********************************

//This helps with testing, do not modify.
bool checkTest(string testName, int whatItShouldBe, int whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    cout << "***Failed test " << testName << " *** " << endl << "   Output was " << whatItIs << endl << "   Output should have been " << whatItShouldBe << endl;
    return false;
  }
}


//This helps with testing, comment it in when ready, but do not modify the code.
bool checkTest(string testName, string whatItShouldBe, string whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    if (whatItShouldBe == "") {
      cout << "***Failed test " << testName << " *** " << endl << "   Output was " << whatItIs << endl << "   Output should have been blank. " << endl;
    }
    else {
      cout << "***Failed test " << testName << " *** " << endl << "   Output was " << whatItIs << endl << "   Output should have been " << whatItShouldBe << endl;
    }
    return false;
  }
}

//This helps with testing, do not modify.
bool checkTestMemory(string testName, int whatItShouldBe, int whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    cout << "***Failed test " << testName << " *** " << endl << ".  ";
    cout << "You are manually managing " << whatItIs << " bytes in memory, but it should be " << whatItShouldBe << " bytes." << endl;
    return false;
  }
}



//This helps with testing, do not modify.
void testStackForCS2420() {

  // Last in, first out data structure (LIFO)

  string result;
  string caughtError;
  {
    StackForCS2420<int> stack(5);

    stack.push(1);

    int data = stack.top();
    stack.pop();
    checkTest("testStackForCS2420 #1", 1, data);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    checkTest("testStackForCS2420 #2", 5, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #3", 4, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #4", 3, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #5", 2, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #6", 1, stack.top());
    stack.pop();
    // Now cover error handling
    try {
      result = stack.top();
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackForCS2420 #7", "caught", caughtError);

    // Check currentSize
    checkTest("testStackForCS2420 #8", 0, stack.size());
    stack.push(12);
    stack.push(32);
    checkTest("testStackForCS2420 #9", 2, stack.size());

    // Now test filling it up
    stack.push(14);
    stack.push(53);
    stack.push(47);
    checkTest("testStackForCS2420 #10", 5, stack.size());

    // This should simply not let the 20 go in, as it is out of room.
    stack.push(20);

    // Peek at what is at the top
    checkTest("testStackForCS2420 #11", 47, stack.top());

    // Grab all the items again.
    checkTest("testStackForCS2420 #12", 47, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #13", 53, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #14", 14, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #15", 32, stack.top());
    stack.pop();
    checkTest("testStackForCS2420 #16", 12, stack.top());
    stack.pop();

    // Now do error handling again
    try {
      result = stack.top();
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackForCS2420 #17", "caught", caughtError);
  }
  {
    // Test some strings
    StackForCS2420<string> sstack(10);

    sstack.push("pencil");
    sstack.push("pen");
    sstack.push("marker");

    checkTest("testStackForCS2420 #18", 3, sstack.size());

    // Remove pen from the stack.
    string temp = sstack.top(); // Get marker
    sstack.pop();               // Remove marker
    sstack.pop();               // Remove pen
    sstack.push(temp);          // Push marker back in

                                 // See if it worked 
    checkTest("testStackForCS2420 #19", "marker", sstack.top());
    sstack.pop();
    checkTest("testStackForCS2420 #20", "pencil", sstack.top());
    sstack.pop();

    checkTest("testStackForCS2420 #21", 0, sstack.size());
  }

}


//This helps with testing, do not modify.
void testStackAdditional() {

  // Last in, first out data structure (LIFO)

  int result;
  string caughtError;
  {
    // Now try popSecondFromTop()
    StackForCS2420<int> stack(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.popSecondFromTop();
    checkTest("testStackAdditional #1", 5, stack.top());
    stack.pop();
    checkTest("testStackAdditional #2", 3, stack.top());
    stack.pop();
    stack.pop();
    stack.pop();

    // This shouldn't crash.
    stack.push(1);
    stack.popSecondFromTop();
   
    checkTest("testStackAdditional #3", 1, stack.top());
  }
  {
    // Now try pushUnderTop()
    StackForCS2420<int> stack(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.pushUnderTop(8);
    checkTest("testStackAdditional #4", 5, stack.top());
    stack.pop();
    checkTest("testStackAdditional #5", 8, stack.top());
    stack.pop();
    checkTest("testStackAdditional #6", 4, stack.top());
    stack.pop();
    checkTest("testStackAdditional #7", 3, stack.top());
    stack.pop();
    checkTest("testStackAdditional #8", 2, stack.top());
    stack.pop();
    checkTest("testStackAdditional #9", 1, stack.top());
    stack.pop();
    try {
      result = stack.top();
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackAdditional #10", "caught", caughtError);

    // This shouldn't crash
    stack.pushUnderTop(10);
    try {
      result = stack.top();
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackAdditional #11", "caught", caughtError);
  }
  {
    // Now try topSecondFromTop()
    StackForCS2420<int> stack(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    checkTest("testStackAdditional #12", 4, stack.topSecondFromTop());
    stack.pop();
    checkTest("testStackAdditional #13", 3, stack.topSecondFromTop());
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    // This shouldn't crash
    stack.push(1);
    try {
      result = stack.topSecondFromTop();
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackAdditional #14", "caught", caughtError);
  }
  {
    // Now try operator[]()
    StackForCS2420<int> stack(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    checkTest("testStackAdditional #15", 5, stack[0]);
    checkTest("testStackAdditional #16", 4, stack[1]);
    checkTest("testStackAdditional #17", 1, stack[4]);
    stack[4] = 10;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    checkTest("testStackAdditional #18", 10, stack.top());
    stack.pop();

    // This shouldn't crash.
    stack.push(1);
    try {
      result = stack[1];
    }
    catch (int) {
      caughtError = "caught";
    }
    checkTest("testStackAdditional #9", "caught", caughtError);
  }
}

void pressAnyKeyToContinue() {
  cout << "Press enter to continue...";

  //Linux and Mac users with g++ don't need this
  //But everyone else will see this message.
  cin.get();

}


int main() {

  {
    testStackForCS2420();
    pressAnyKeyToContinue();
    testStackAdditional();
    pressAnyKeyToContinue();
  }
  cout << "Shutting down the program" << endl;
  return 0;
}

