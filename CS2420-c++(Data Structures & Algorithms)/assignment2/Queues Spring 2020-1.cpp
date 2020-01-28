//g++ -std=c++17 'Queues Spring 2020-1.cpp' -o 'Queues Spring 2020-1'
//./'Queues Spring 2020-1'

//Copyright 2020, Bradley Peterson, Weber State University, All rights reserved.
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

void pressAnyKeyToContinue();

vector<bool> destructTracker;
class DestructorTester {
public:
  DestructorTester() {
    index = destructTracker.size();
    destructTracker.push_back(false);
  }
  ~DestructorTester() {
    destructTracker[index] = true;
  }
private:
  int index{ -1 };
};

//These two base classes help the assignment compile and run without any changes.  
//Dot not modify these.  You will instead override the methods in the derived classes below.
template <typename T>
class BaseQueue {
public:
  BaseQueue() {}
  BaseQueue(const unsigned int capacity) {}
  void push_back(const T& item) {}                            //These methods just contain filler code to help the code compile on the initial run.
  //void push_back(T&& item) {}                                 //In the derived classes below, you will be overriding these with your own versions.  
  void pop_front() {}
  T front() { T temp{}; return temp; }
  T back() { T temp{}; return temp; }
  const unsigned int numItems() const { return 0; }

  BaseQueue(const BaseQueue<T>& objToCopy) = delete;
  const BaseQueue<T>& operator=(const BaseQueue<T>& objToCopy) = delete;
  BaseQueue(BaseQueue<T>&& objToCopy) { cout << "You need to override this base class move constructor" << endl; }
  BaseQueue<T>& operator=(BaseQueue<T>&& objToCopy) { cout << "You need to override this base class move assignment" << endl; BaseQueue<T> temp(0); return temp; }

protected:
  T* arr{ nullptr };

};

//**********************************
//Write your code below here
//**********************************
template <typename T>
class QueueForCS2420 : public BaseQueue<T> {
public:
  QueueForCS2420(const unsigned int capacity);
  void push_back(const T& item);
  void pop_front();
  T front();
  T back();
  unsigned int numItems() const;
  QueueForCS2420(QueueForCS2420<T>&& objToCopy);
  QueueForCS2420<T>& operator=(QueueForCS2420<T>&& objToCopy);
  ~QueueForCS2420();

private:
  unsigned int capacity;
  unsigned int size;
  unsigned int head;
  unsigned int tail;
};

template <typename T>
QueueForCS2420<T>::QueueForCS2420(const unsigned int capacity) {
    this->arr = new T[capacity];
    head = 0;
    tail = 0;
    size = 0;
    this->capacity = capacity;
}

template <typename T>
QueueForCS2420<T>::~QueueForCS2420(){
    delete[] this->arr;
}

template <typename T>
unsigned int QueueForCS2420<T>::numItems() const{
  return size;
}

template <typename T>
void QueueForCS2420<T>::push_back(const T& item) {
  if (size < capacity){
    if (size == 0 || tail > capacity) {
      tail = 0;
      this->arr[tail] = item;
      tail++;
      size++;
    } else {
      this->arr[tail] = item;
      tail++;
      size++;
    }
  } else {
    cout << "The queue is full. Cannot push back more values." << endl;
    return;
  }
}

template <typename T>
void QueueForCS2420<T>::pop_front(){
if (size > 0){
    if (head >= capacity) {
      head = 0;
      size--;
    } else {
      head++;
      size--;
    }
  } else {
    head = 0;
    cout << "The queue is empty. Cannot pop the front of queue." << endl;
    return;
  }
}

template <typename T>
T QueueForCS2420<T>::front(){
  if (size > 0){
    return this->arr[head];
  } else {
    head = 0;
    cout << "The queue is empty. Cannot show front of queue." << endl;
    throw 1;
  }
}

template <typename T>
T QueueForCS2420<T>::back(){
  if (size > 0){
    return this->arr[tail-1];
  } else {
    cout << "The queue is empty. Cannot show back of queue." << endl;
    throw 1;
  }
}

template <typename T>
QueueForCS2420<T>::QueueForCS2420(QueueForCS2420<T>&& objToCopy){
  this->arr = objToCopy.arr;
  objToCopy.arr = nullptr;

  this->capacity = objToCopy.capacity;
  objToCopy.capacity = 0;
  this->size = objToCopy.size;
  objToCopy.size = 0;
  this->head = objToCopy.head;
  objToCopy.head = 0;
  this->tail = objToCopy.tail;
  objToCopy.tail = 0;
}

template <typename T>
QueueForCS2420<T>& QueueForCS2420<T>::operator=(QueueForCS2420<T>&& objToCopy){
 if (this->arr) {
    delete[] this->arr;
  }

  this->arr = objToCopy.arr;
  objToCopy.arr = nullptr;

  this->capacity = objToCopy.capacity;
  objToCopy.capacity = 0;
  this->size = objToCopy.size;
  objToCopy.size = 0;
  this->head = objToCopy.head;
  objToCopy.head = 0;
  this->tail = objToCopy.tail;
  objToCopy.tail = 0;

return *this;
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

void testQueueForCS2420() {

  string result;
  string caughtError;
  QueueForCS2420<string> pQueue(5);

  // Tests push_back
  string item = "penny";
  pQueue.push_back(item);
  item = "nickel";
  pQueue.push_back(item);
  item = "dime";
  pQueue.push_back(item);
  item = "quarter";
  pQueue.push_back(item);

  checkTest("testQueueForCS2420 #1", 4, pQueue.numItems());

  checkTest("testQueueForCS2420 #2", "penny", pQueue.front());
  checkTest("testQueueForCS2420 #3", "quarter", pQueue.back());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #4", 3, pQueue.numItems());

  checkTest("testQueueForCS2420 #5", "nickel", pQueue.front());
  checkTest("testQueueForCS2420 #6", "quarter", pQueue.back());

  pQueue.pop_front();
  checkTest("testQueueForCS2420 #7", "dime", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #8", "quarter", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #9", 0, pQueue.numItems());

  caughtError = "not caught";
  try {
    result = pQueue.front();
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testQueueForCS2420 #10", "caught", caughtError);

  caughtError = "not caught";
  try {
    result = pQueue.back();
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testQueueForCS2420 #11", "caught", caughtError);

  checkTest("testQueueForCS2420 #12", 0, pQueue.numItems());

  // Because of so many tests, pause for a bit on the screen.
  pressAnyKeyToContinue();

  item = "penny";
  pQueue.push_back(item);
  checkTest("testQueueForCS2420 #13", "penny", pQueue.front());
  pQueue.push_back("nickel");
  pQueue.push_back("dime");
  pQueue.push_back("quarter");

  checkTest("testQueueForCS2420 #14", "penny", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("half dollar");
  pQueue.push_back("silver dollar");

  // It should be full, no more room to add more.
  pQueue.push_back("million dollar bill");

  // Take a look at what is coming next.
  checkTest("testQueueForCS2420 #15", "nickel", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #16", "dime", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #17", "quarter", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #18", "half dollar", pQueue.front());
  pQueue.pop_front();
  checkTest("testQueueForCS2420 #19", "silver dollar", pQueue.front());
  pQueue.pop_front();

  caughtError = "not caught";
  try {
    result = pQueue.front();
  }
  catch (int) {
    caughtError = "caught";
  }

  checkTest("testQueueForCS2420 #20", "caught", caughtError);

  // Test adding and removing back and forth
  pQueue.push_back("penny");
  checkTest("testQueueForCS2420 #21", "penny", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("nickel");
  checkTest("testQueueForCS2420 #22", "nickel", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("dime");
  checkTest("testQueueForCS2420 #23", "dime", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("quarter");
  checkTest("testQueueForCS2420 #24", "quarter", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("half dollar");
  checkTest("testQueueForCS2420 #25", "half dollar", pQueue.front());
  pQueue.pop_front();
  pQueue.push_back("silver dollar");
  checkTest("testQueueForCS2420 #26", 1, pQueue.numItems());

  checkTest("testQueueForCS2420 #27", "silver dollar", pQueue.front());
  pQueue.pop_front();
  caughtError = "not caught";
  try {
    result = pQueue.front();
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testQueueForCS2420 #28", "caught", caughtError);

  QueueForCS2420<int> iQueue(3);

  iQueue.push_back(1);
  iQueue.push_back(2);
  iQueue.pop_front();
  iQueue.push_back(3);
  iQueue.pop_front();
  iQueue.push_back(4);
  iQueue.push_back(5);
  checkTest("testQueueForCS2420 #29", 3, iQueue.front());
  iQueue.pop_front();
  checkTest("testQueueForCS2420 #30", 4, iQueue.front());
  iQueue.pop_front();
  checkTest("testQueueForCS2420 #31", 5, iQueue.front());

}

void pressAnyKeyToContinue() {
  cout << "Press enter to continue...";

  //Linux and Mac users with g++ don't need this
  //But everyone else will see this message.
  cin.get();

}

void testQueueMove() {

  string result;
  string caughtError;


  // Test the move constructor.
  {
    string result;
    string caughtError;
    QueueForCS2420<int> iQueue(5);

    // Put some items in.
    iQueue.push_back(1);
    iQueue.push_back(2);
    iQueue.push_back(3);
    iQueue.push_back(4);
    iQueue.push_back(5);
    iQueue.pop_front();
    iQueue.push_back(6);

    QueueForCS2420<int> moved(std::move(iQueue));

    checkTest("testQueueCopyAndMove #1", 0, iQueue.numItems());
    checkTest("testQueueCopyAndMove #2", 2, moved.front());
    moved.pop_front();
    checkTest("testQueueCopyAndMove #3", 3, moved.front());

    checkTest("testQueueCopyAndMove #4", 6, moved.back());

  }

  // Test the move assignment.
  {
    {
      string result;
      string caughtError;
      QueueForCS2420<int> iQueue(5);

      // Put some items in.
      iQueue.push_back(1);
      iQueue.push_back(2);
      iQueue.push_back(3);
      iQueue.push_back(4);
      iQueue.push_back(5);
      iQueue.pop_front();
      iQueue.push_back(6);

      QueueForCS2420<int> moved(0);
      moved = std::move(iQueue);

      checkTest("testQueueCopyAndMove #5", 0, iQueue.numItems());
      checkTest("testQueueCopyAndMove #6", 2, moved.front());
      moved.pop_front();
      checkTest("testQueueCopyAndMove #7", 3, moved.front());

      checkTest("testQueueCopyAndMove #8", 6, moved.back());
    }
    {
      //test that it destroys the original array.
      QueueForCS2420< DestructorTester > dQueue(5);
      QueueForCS2420< DestructorTester > anotherdQueue(5);
      dQueue = std::move(anotherdQueue);
      bool everythingDestructed{ true };
      if (destructTracker.size() < 5) {
        everythingDestructed = false;
      }
      else {
        for (int i = 0; i < 5; i++) {
          if (!destructTracker[i]) {
            everythingDestructed = false;
          }
        }
      }
      if (everythingDestructed) {
        cout << "Passed testQueueCopyAndMove #9" << endl;
      }
      else {
        cout << "***Failed test testQueueCopyAndMove #9 *** " << endl << "   Your move assignment didn't first delete the original array. " << endl;
      }
    }
    destructTracker.clear();
  }

}

int main() {

  {
    testQueueForCS2420();
    pressAnyKeyToContinue();
    testQueueMove();
    pressAnyKeyToContinue();
  }
  cout << "Shutting down the program" << endl;
  return 0;
}

