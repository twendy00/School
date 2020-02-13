//Copyright 2020, Bradley Peterson, Weber State University, All rights reserved. 
#include <sstream>
#include <map>
#include <chrono>
#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stringstream;

//************************************************************************
//A class I designed to help keep track of how much memory you allocate
//Do not modify, this is not part of your assignment, it just helps test it.
//For this to work, a class needs to inherit off of this one. 
//Then this does the rest of the work, since it 
//overloads new, new[], delete, and delete[].
//************************************************************************
class ManageMemory {
public:

  static std::size_t getTotalSize() {
    std::size_t total = 0;
    std::map<void*, std::size_t>::iterator iter;
    for (iter = mapOfAllocations.begin(); iter != mapOfAllocations.end(); ++iter) {
      total += iter->second;
    }
    return total;
  }

  //I overloaded the new and delete keywords so I could manually track allocated memory.
  void* operator new(std::size_t x) {
    void* ptr = ::operator new(x);
    mapOfAllocations[ptr] = x;
    return ptr;
  }
  void* operator new[](std::size_t x) {
    void* ptr = ::operator new[](x);
    mapOfAllocations[ptr] = x;
    return ptr;
  }
    void operator delete(void* x) {
    mapOfAllocations.erase(x);
    ::operator delete(x);
  }
  void operator delete[](void* x) {
    mapOfAllocations.erase(x);
    ::operator delete[](x);
  }
private:
  static std::map<void*, std::size_t> mapOfAllocations;
};
std::map<void*, std::size_t> ManageMemory::mapOfAllocations;

//******************
//The node class
//******************
template <typename T>
class Node : public ManageMemory {
public:
  T data{};
  Node<T>* backward{ nullptr };
  Node<T>* forward{ nullptr };

};


//******************
//The linked list base class
//This contains within it a class declaration for an iterator
//******************
template <typename T>
class BaseDoublyLinkedList : public ManageMemory {
public:

  //public members of the DoublyLinkedList class
  ~BaseDoublyLinkedList();
  string getListAsString();
  string getListBackwardsAsString();
  void insertFirst(const T&);
  void insertLast(const T&);
  T get(const unsigned int index) const { cerr << "Error: You didn't override this base class method yet" << endl; T temp{}; return temp; }
  T& operator[](const unsigned int index) const { cerr << "Error: You didn't override this base class method yet" << endl; T temp{}; return temp; }
  void insert(const unsigned int index, const T& value) { cerr << "Error: You didn't override this base class method yet" << endl; }
  void remove(const unsigned int index) { cerr << "Error: You didn't override this base class method yet" << endl; }
  void removeAllInstances(const T& value) { cerr << "Error: You didn't override this base class method yet" << endl; }

protected:

  Node<T>* first{ nullptr };
  Node<T>* last{ nullptr };

};

template <typename T>// destructor
BaseDoublyLinkedList<T>::~BaseDoublyLinkedList() {
  Node<T>* temp = this->first;

  while (first) {
    first = first->forward;
    delete temp;
    temp = first;
  }
}

template <typename T>
void BaseDoublyLinkedList<T>::insertFirst(const T& item) {
  Node<T>* temp = new Node<T>();

  temp->data = item;
  if (!first) {
    // Scenario: List is empty
    last = temp;
  }
  else {
    first->backward = temp;
    temp->forward = first;
  }
  first = temp;
}

template <typename T>
void BaseDoublyLinkedList<T>::insertLast(const T& item) {
  Node<T>* temp = new Node<T>();

  temp->data = item;
  if (!first) {
    // Scenario: List is empty
    first = temp;
  }
  else {
    last->forward = temp;
    temp->backward = last;
  }
  last = temp;
}


//This method helps return a string representation of all nodes in the linked list, do not modify.
template <typename T>
string BaseDoublyLinkedList<T>::getListAsString() {
  stringstream ss;
  if (!first) {
    ss << "The list is empty.";
  }
  else {

    Node<T>* currentNode{ first };
    ss << currentNode->data;
    currentNode = currentNode->forward;

    while (currentNode) {
      ss << " " << currentNode->data;
      currentNode = currentNode->forward;
    };
  }
  return ss.str();
}

//This method helps return a string representation of all nodes in the linked list, do not modify.
template <typename T>
string BaseDoublyLinkedList<T>::getListBackwardsAsString() {
  stringstream ss;
  if (!first) {
    ss << "The list is empty.";
  }
  else {

    Node<T>* currentNode{ last };
    ss << currentNode->data;
    currentNode = currentNode->backward;

    while (currentNode) {
      ss << " " << currentNode->data;
      currentNode = currentNode->backward;
    };
  }
  return ss.str();
}

//Copyright 2020, Bradley Peterson, Weber State University, All rights reserved. (2/20)
//**********************************
//Write your code below here
//**********************************
template <typename T>
class DoublyLinkedList : public BaseDoublyLinkedList<T> {

};



//**********************************
//Write your code above here
//**********************************


//This helps with testing, do not modify.
bool checkTest(string testName, string whatItShouldBe, string whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    cout << "****** Failed test " << testName << " ****** " << endl << "     Output was " << whatItIs << endl << "     Output should have been " << whatItShouldBe << endl;
    return false;
  }
}

//This helps with testing, do not modify.
bool checkTest(string testName, int whatItShouldBe, int whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    cout << "****** Failed test " << testName << " ****** " << endl << "     Output was " << whatItIs << endl << "     Output should have been " << whatItShouldBe << endl;
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
    cout << "***Failed test " << testName << " *** " << endl << "  You lost track of " << whatItIs << " bytes in memory!" << endl;
    return false;
  }
}

//This helps with testing, do not modify.
void testGet() {
  DoublyLinkedList<int>* d = new DoublyLinkedList<int>;
  for (int i = 10; i < 20; i++) {
    d->insertLast(i);
  }

  //Test just to make sure the data went in the list. 
  checkTest("testGet #1", "10 11 12 13 14 15 16 17 18 19", d->getListAsString());
  checkTest("testGet #2", "19 18 17 16 15 14 13 12 11 10", d->getListBackwardsAsString());

  //Test retrieving items. 
  int item = d->get(0);
  checkTest("testGet #3", 10, item);

  item = d->get(5);
  checkTest("testGet #4", 15, item);

  item = d->get(9);
  checkTest("testGet #5", 19, item);

  //Make sure the list was undisturbed during this time
  checkTest("testGet #6", "10 11 12 13 14 15 16 17 18 19", d->getListAsString());

  //Try to access out of bounds.  
  string caughtError = "";
  try {
    int item = d->get(-1);
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testGet #7", "caught", caughtError);

  try {
    int item = d->get(100);
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testGet #8", "caught", caughtError);

  delete d;

  d = new DoublyLinkedList<int>;
  d->insertLast(18);
  item = d->get(0);
  checkTest("testGet #9", 18, item);
  delete d;
}

//This helps with testing, do not modify.
void testSquareBrackets() {
  DoublyLinkedList<int> d;
  for (int i = 10; i < 20; i++) {
    d.insertLast(i);
  }

  //Test just to make sure the data went in the list. 
  checkTest("testSquareBrackets #1", "10 11 12 13 14 15 16 17 18 19", d.getListAsString());
  checkTest("testSquareBrackets #2", "19 18 17 16 15 14 13 12 11 10", d.getListBackwardsAsString());

  //Test retrieving items. 
  int item = d[0];
  checkTest("testSquareBrackets #3", 10, item);

  item = d[5];
  checkTest("testSquareBrackets #4", 15, item);

  item = d[9];
  checkTest("testSquareBrackets #5", 19, item);

  //Make sure the list was undisturbed during this time
  checkTest("testSquareBrackets #6", "10 11 12 13 14 15 16 17 18 19", d.getListAsString());
  checkTest("testSquareBrackets #7", "19 18 17 16 15 14 13 12 11 10", d.getListBackwardsAsString());

  //now test the return by reference
  d[1] = 1000;

  checkTest("testSquareBrackets #8", "10 1000 12 13 14 15 16 17 18 19", d.getListAsString());
  checkTest("testSquareBrackets #9", "19 18 17 16 15 14 13 12 1000 10", d.getListBackwardsAsString());

  //Try to access out of bounds.  
  string caughtError = "";
  try {
    int item = d[-1];
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testSquareBrackets #10", "caught", caughtError);

  try {
    int item = d[100];
  }
  catch (int) {
    caughtError = "caught";
  }
  checkTest("testSquareBrackets #11", "caught", caughtError);

}

//This helps with testing, do not modify.
void testInsert() {
  DoublyLinkedList<int>* s = new DoublyLinkedList<int>();
  for (int i = 10; i < 20; i++) {
    s->insertLast(i);
  }

  //Test just to make sure the data went in the list. 
  checkTest("testInsert #1", "10 11 12 13 14 15 16 17 18 19", s->getListAsString());
  checkTest("testInsert #2", "19 18 17 16 15 14 13 12 11 10", s->getListBackwardsAsString());

  s->insert(3, 33);

  checkTest("testInsert #3", "10 11 12 33 13 14 15 16 17 18 19", s->getListAsString());
  checkTest("testInsert #4", "19 18 17 16 15 14 13 33 12 11 10", s->getListBackwardsAsString());

  s->insert(0, 9);

  checkTest("testInsert #5", "9 10 11 12 33 13 14 15 16 17 18 19", s->getListAsString());
  checkTest("testInsert #6", "19 18 17 16 15 14 13 33 12 11 10 9", s->getListBackwardsAsString());

  s->insert(12, 20);

  checkTest("testInsert #7", "9 10 11 12 33 13 14 15 16 17 18 19 20", s->getListAsString());
  checkTest("testInsert #8", "20 19 18 17 16 15 14 13 33 12 11 10 9", s->getListBackwardsAsString());

  delete s;

  s = new DoublyLinkedList<int>();

  s->insert(0, 42);
  checkTest("testInsert #9", "42", s->getListAsString());
  checkTest("testInsert #10", "42", s->getListBackwardsAsString());

  s->insert(1, 82);
  checkTest("testInsert #11", "42 82", s->getListAsString());
  checkTest("testInsert #12", "82 42", s->getListBackwardsAsString());

  delete s;

}

//This helps with testing, do not modify.
void testRemove() {
  DoublyLinkedList<int>* d = new DoublyLinkedList<int>;
  for (int i = 10; i < 17; i++) {
    d->insertLast(i);
  }

  //Test just to make sure the data went in the list. 
  checkTest("testRemove #1", "10 11 12 13 14 15 16", d->getListAsString());
  checkTest("testRemove #2", "16 15 14 13 12 11 10", d->getListBackwardsAsString());

  //Test deleting first items. 
  d->remove(0);
  checkTest("testRemove #3", "11 12 13 14 15 16", d->getListAsString());
  checkTest("testRemove #4", "16 15 14 13 12 11", d->getListBackwardsAsString());

  d->remove(0);
  checkTest("testRemove #5", "12 13 14 15 16", d->getListAsString());
  checkTest("testRemove #6", "16 15 14 13 12", d->getListBackwardsAsString());

  //Test deleting a middle item
  d->remove(2);
  checkTest("testRemove #7", "12 13 15 16", d->getListAsString());
  checkTest("testRemove #8", "16 15 13 12", d->getListBackwardsAsString());

  //Test deleting last itmes
  d->remove(3);
  checkTest("testRemove #9", "12 13 15", d->getListAsString());
  checkTest("testRemove #10", "15 13 12", d->getListBackwardsAsString());

  d->remove(2);
  checkTest("testRemove #11", "12 13", d->getListAsString());
  checkTest("testRemove #12", "13 12", d->getListBackwardsAsString());

  //Test deleting a Kth element that doesn't exist.
  d->remove(500);
  checkTest("testRemove #13", "12 13", d->getListAsString());
  checkTest("testRemove #14", "13 12", d->getListBackwardsAsString());

  //Test deleting a last item
  d->remove(1);
  checkTest("testRemove #15", "12", d->getListAsString());
  checkTest("testRemove #16", "12", d->getListBackwardsAsString());

  //Test deleting item that doesn't exist
  d->remove(1);
  checkTest("testRemove #17", "12", d->getListAsString());
  checkTest("testRemove #18", "12", d->getListBackwardsAsString());

  //Test deleting item on the first
  d->remove(0);
  checkTest("testRemove #19", "The list is empty.", d->getListAsString());

  //Test attempting to delete from an empty list
  d->remove(0);
  checkTest("testRemove #20", "The list is empty.", d->getListAsString());

  delete d;
}


//This helps with testing, do not modify.
void testRemoveAllInstances() {

  DoublyLinkedList<int>* d = new DoublyLinkedList<int>;

  d->insertLast(4);
  d->insertLast(2);
  d->insertLast(6);
  d->insertLast(5);
  d->insertLast(6);
  d->insertLast(9);

  //Do a delete, test it.
  d->removeAllInstances(6);
  checkTest("testRemoveAllInstances #1", "4 2 5 9", d->getListAsString());
  checkTest("testRemoveAllInstances #2", "9 5 2 4", d->getListBackwardsAsString());

  delete d;
  d = new DoublyLinkedList<int>;
  d->insertLast(4);
  d->insertLast(2);
  d->insertLast(3);
  d->insertLast(4);
  d->insertLast(4);
  d->insertLast(4);
  d->insertLast(9);
  d->removeAllInstances(4);
  checkTest("testRemoveAllInstances #3", "2 3 9", d->getListAsString());
  checkTest("testRemoveAllInstances #4", "9 3 2", d->getListBackwardsAsString());

  delete d;
  d = new DoublyLinkedList<int>;
  d->insertLast(3);
  d->insertLast(3);
  d->insertLast(3);
  d->insertLast(8);
  d->insertLast(2);
  d->insertLast(3);
  d->insertLast(3);
  d->insertLast(3);
  d->removeAllInstances(3);
  checkTest("testRemoveAllInstances #5", "8 2", d->getListAsString());
  checkTest("testRemoveAllInstances #6", "2 8", d->getListBackwardsAsString());

  delete d;
  d = new DoublyLinkedList<int>;
  d->insertLast(9);
  d->insertLast(9);
  d->insertLast(4);
  d->insertLast(2);
  d->insertLast(9);
  d->insertLast(9);
  d->insertLast(5);
  d->insertLast(1);
  d->insertLast(9);
  d->insertLast(2);
  d->insertLast(9);
  d->insertLast(9);

  //Do a delete, test it.
  d->removeAllInstances(9);
  checkTest("testRemoveAllInstances #7", "4 2 5 1 2", d->getListAsString());
  checkTest("testRemoveAllInstances #8", "2 1 5 2 4", d->getListBackwardsAsString());

  //Test deleting something that doesn't exist
  d->removeAllInstances(7);
  checkTest("testRemoveAllInstances #9", "4 2 5 1 2", d->getListAsString());
  checkTest("testRemoveAllInstances #10", "2 1 5 2 4", d->getListBackwardsAsString());

  //A few more tests
  d->removeAllInstances(2);
  checkTest("testRemoveAllInstances #11", "4 5 1", d->getListAsString());
  checkTest("testRemoveAllInstances #12", "1 5 4", d->getListBackwardsAsString());

  d->removeAllInstances(4);
  checkTest("testRemoveAllInstances #13", "5 1", d->getListAsString());
  checkTest("testRemoveAllInstances #14", "1 5", d->getListBackwardsAsString());

  d->removeAllInstances(5);
  checkTest("testRemoveAllInstances #15", "1", d->getListAsString());

  d->removeAllInstances(1);
  checkTest("testRemoveAllInstances #16", "The list is empty.", d->getListAsString());

  //retest deleting something that doesn't exist.
  d->removeAllInstances(7);
  checkTest("testRemoveAllInstances #17", "The list is empty.", d->getListAsString());
  delete d;

  //Now ramp it up and do some huge tests.  Start by timing how long a smaller approach takes.
  d = new DoublyLinkedList<int>;
  //Fill the list with a pattern of
  //1 2 2 3 3 3 4 4 4 4 1 2 2 3 3 3 4 4 4 4 ...
  cout << endl << "Preparing for testRemoveAllInstances #18, placing 50,000 numbers into the linked list to see how long things take." << endl;
  for (int i = 0; i < 20000; i++) {
    for (int j = 0; j < i % 4 + 1; j++) {
      d->insertLast(i % 4 + 1);
    }
  }
  cout << "    Calling removeAllInstances to remove 15,000 3s in the list." << endl;
  //delete all the 3s.
  auto start = std::chrono::high_resolution_clock::now();
  d->removeAllInstances(3);
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::micro> diff = end - start;
  double benchmarkTime = diff.count() / 1000.0;
  cout << "    Removing 15,000 3s took " << benchmarkTime << " milliseconds." << endl;
  cout << "    So we will assume removing 30,000 3s then should be double that..." << endl;
  cout << "	 about " << benchmarkTime << " * 2 = " << (benchmarkTime * 2) << " milliseconds if done correctly." << endl;
  delete d;

  cout << "Starting testRemoveAllInstances #18, filling in 100,000 numbers into the linked list to get it started." << endl;
  d = new DoublyLinkedList<int>;
  //Fill the list with a pattern of
  //1 2 2 3 3 3 4 4 4 4 1 2 2 3 3 3 4 4 4 4 ...
  for (int i = 0; i < 40000; i++) {
    for (int j = 0; j < i % 4 + 1; j++) {
      d->insertLast(i % 4 + 1);
    }
  }
  cout << "    Finished inserting 100,000 numbers." << endl;
  cout << "    Calling removeAllInstances to remove 30,000 3s.  This should take about " << (benchmarkTime * 2) << " milliseconds." << endl;
  //delete all the 3s.
  start = std::chrono::high_resolution_clock::now();
  d->removeAllInstances(3);
  end = std::chrono::high_resolution_clock::now();
  diff = end - start;
  double actualTime = diff.count() / 1000.0;
  if (actualTime < (benchmarkTime * 2 * 1.5)) { //The 1.5 gives an extra 50% wiggle room
    cout << "Passed testRemoveAllInstances #18, completed removeAllInstances in " << actualTime << " milliseconds." << endl;

  }
  else {
    cout << "*** Failed testRemoveAllInstances #18, removeAllInstances took " << actualTime
      << " milliseconds." << endl;
    cout << "*** This which is much worse than the expected " << (benchmarkTime * 2) << " milliseconds." << endl;
  }
  delete d;

}
//911

void pressAnyKeyToContinue() {
  cout << "Press enter to continue...";
  cin.get();
}


int main() {

  //For your assignment, write the code to make these three methods work
  //You should not modify the code here in main.
  checkTestMemory("Memory Leak/Allocation Test #1", 0, ManageMemory::getTotalSize());

  testGet();

  checkTestMemory("Memory Leak/Allocation Test #2", 0, ManageMemory::getTotalSize());

  pressAnyKeyToContinue();

  testSquareBrackets();

  checkTestMemory("Memory Leak/Allocation Test #3", 0, ManageMemory::getTotalSize());

  pressAnyKeyToContinue();

  testInsert();

  checkTestMemory("Memory Leak/Allocation Test #4", 0, ManageMemory::getTotalSize());

  pressAnyKeyToContinue();

  testRemove();

  checkTestMemory("Memory Leak/Allocation Test #5", 0, ManageMemory::getTotalSize());

  pressAnyKeyToContinue();

  testRemoveAllInstances();

  checkTestMemory("Memory Leak/Allocation Test #6", 0, ManageMemory::getTotalSize());

  pressAnyKeyToContinue();

  return 0;
}
