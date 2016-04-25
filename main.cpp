#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <time.h>

void isEmptyTest();
void sizeTest();
void searchTest();
void addBackTest();
void addFrontTest();
void removeBackTest();
void removeFrontTest();
void removeCompareTest();

int main()
{

  // std::cout << myList.size() << "\n";
  // myList.addBack("4");
  // myList.addFront("23");
  // std::cout << myList.size() << "\n";
  // myList.~LinkedList();
  // std::cout << myList.size() << "\n";
  // myList.removeFront();
  // myList.addBack(4);
  // std::vector<double> newVec = myList.toVector();
  // for(int i = 0; i < myList.size(); i++)
  // {
  //   std::cout << newVec.back() << "\n";
  //   newVec.pop_back();
  // }
  // myList.addBack(17);
  // if(myList.search(0))
  // {
  //   std::cout << "zero found\n";
  // }
  // if(myList.search(17))
  // {
  //   std::cout << "17 found\n";
  // }
  // std::vector<int> newVec = myList.toVector();
  // for(int i = 0; i < myList.size(); i++)
  // {
  //   std::cout << newVec.back() << "\n";
  //   newVec.pop_back();
  // }
  //
  // for(int i = 0; i < 40 ; i++)
  // {
  //   myList.addFront(i);
  //   myList.addBack(3);
  //
  //   std::cout << "Size: " << myList.size() << "\n";
  // }
  //
  // std::vector<int> newVec2 = myList.toVector();
  // for(int i = 0; i < myList.size(); i++)
  // {
  //   std::cout << newVec2.back() << "\n";
  //   newVec2.pop_back();
  // }


  // myList.addBack(5);
  // myList.addFront(4);
  //
  // myList.addFront(4);
  //
  // myList.addFront(4);
  //
  // myList.addFront(4);
  //
  // myList.addFront(4);
  //
  // myList.addFront(4);
  //
  //   std::vector<int> newVec2 = myList.toVector();
  //   for(int i = 0; i < myList.size(); i++)
  //   {
  //     std::cout << newVec2.back() << " \n";
  //     newVec2.pop_back();
  //   }
  //
  //   std::cout << "\n\nStart\n";
  //
  //   for(int i = 0; i < 40; i++)
  //   {
  //     newVec2 = myList.toVector();
  //     for(int i = 0; i < myList.size(); i++)
  //     {
  //       std::cout << newVec2.back() << " \n";
  //       newVec2.pop_back();
  //     }
  //     if(myList.removeBack())
  //       std::cout << "Removed!\n";
  //   }

  // myList->LinkedList::addBack(5);
  // myList->LinkedList::addBack(5);
  // myList->LinkedList::addBack(5);
  // myList->LinkedList::addBack(5);
  // myList->LinkedList::addFront(5);
  // myList->LinkedList::addFront(5);
  // myList->LinkedList::addFront(5);
  // myList->LinkedList::addFront(5);
  // myList->LinkedList::removeBack();

  // //Test isEmpty()
  // std::cout << "Test of LinkedList Class\n************************\n\n";
  //
  // //Test isEmpty() method:
  // std::cout << "\n1) Testing \"isEmpty()\" method:\n";
  // //Test isEmpty() on empty list
  // myList = new LinkedList<int>;
  // bool testEmpty = false;
  // testEmpty = myList->isEmpty();
  // std::cout << "\ta) isEmpty() on empty list: ";
  // if(testEmpty)
  //   std::cout << "\t\t\tPASSED\n";
  // else
  //   std::cout << "\t\t\tFAILED\n";
  // //Test isEmpty() on non-empty list
  // bool testNotEmpty = false;
  // myList->addBack(5);
  // testNotEmpty = !(myList->isEmpty());
  // std::cout << "\tb) isEmpty() on a list with one element: ";
  // if(testNotEmpty)
  //   std::cout << "\tPASSED\n";
  // else
  //   std::cout << "\tFAILED\n";
  // //isEmpty() Final Result
  //   std::cout << "\t------------------------------------------------------\n";
  // std::cout << "\tisEmpty() Final Result: ";
  // if(testEmpty && testNotEmpty)
  //   std::cout << "\t\t\tPASSED\n";
  // else
  //   std::cout << "\t\t\tFAILED\n";
  // delete myList;

  // //Test size() method:
  // std::cout << "\n2) Testing \"size()\" method:\n";
  // //Test size() on empty list
  // LinkedList<int>* myList;
  // myList = new LinkedList<int>;
  // int size = 0;
  // bool testZeroSize = false;
  // size = myList->size();
  // if(size == 0)
  //   testZeroSize = true;
  // std::cout << "\ta) size() on empty list: ";
  // if(testZeroSize)
  //   std::cout << "\t\t\tPASSED\n";
  // else
  //   std::cout << "\t\t\tFAILED\n";
  // //Test size() on non-empty list
  // bool testSizeOfOne = false;
  // myList->addBack(5);
  // size = myList->size();
  // if(size == 1)
  //   testSizeOfOne = true;
  // std::cout << "\tb) size() on list with one element: ";
  // if(testSizeOfOne)
  //   std::cout << "\tPASSED\n";
  // else
  //   std::cout << "\t\tFAILED\n";
  // //isEmpty() Final Result
  // std::cout << "\t------------------------------------------------------\n";
  // std::cout << "\tsize() Final Result: ";
  // if(testZeroSize && testSizeOfOne)
  //   std::cout << "\t\t\t\tPASSED\n";
  // else
  //   std::cout << "\t\t\t\tFAILED\n";
  // delete myList;
  std::cout << "Test of LinkedList Class                                RESULT\n************************\n";
  isEmptyTest();
  sizeTest();
  searchTest();
  addBackTest();
  addFrontTest();
  removeBackTest();
  removeFrontTest();
  removeCompareTest();


  return (0);
}

//m_size has a minimum of 1, instead of 0.  Always reduces to a min of 0 so isEmpty() always returns true.
//This means that all the functions that add and remove also take this into account as to not run into errors with null pointers
//
//When printing a vector of a LinkedList of supposed size >= 1,
//since it will actually be of size 2, the first value is always 0 (if int), damn near close to 0 if float or double, and NULL (character) if char.

//Adding strings, bool and integer arrays of size 1 aren't allowed

//Adding a number to an int LL and then calling toVector gives a vector of size n + 1 with a 0 in the front position.
//However, using search(0) on the LL will return false while using search(17) will return true.


//addFront and addBack don't work correctly at all. When used together, one over writes the other in an odd way, explore further.


//isEmpty() doesn't work at all.... totally broken.

//Hypothesis:
//size() always returns 1 + n while since isEmpty() is broken, it will cause the toVector() function to have a front vector of 0.


//Seems like addBack won't work at all after called after addFront or addBack...

//removeBack and removeFront do the same operation.



//To Test:

//Test isEmpty() method:
void isEmptyTest()
{
  std::cout << "\n1) Testing \"isEmpty()\" method:\n";
  //Test isEmpty() on empty list
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  bool testEmpty = false;
  testEmpty = myList->isEmpty();
  std::cout << "\ta) isEmpty() on empty list: ";
  if(testEmpty)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";
  //Test isEmpty() on non-empty list
  bool testNotEmpty = true;
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 1000; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addBack(randomNumber);
    if((myList->isEmpty()))
      testNotEmpty = false;
  }
  std::cout << "\tb) isEmpty() on a list with many elements: ";
  if(testNotEmpty)
    std::cout << "\tPASSED\n";
  else
    std::cout << "\tFAILED\n";
  //isEmpty() Final Result
    std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tisEmpty() Final Result: ";
  if(testEmpty && testNotEmpty)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";
  delete myList;
}

//Test size() method:
void sizeTest()
{
  std::cout << "\n2) Testing \"size()\" method:\n";
  //Test size() on empty list
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  int size = 0;
  bool testZeroSize = true;
  size = myList->size();
  if(size != 0)
    testZeroSize = false;
  std::cout << "\ta) size() on empty list: ";
  if(testZeroSize)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";

  //Test size() on non-empty list
  bool testSizeMany = true;
  srand(time (NULL));
  int randomNumber;
  for(int i = 1; i < 1001; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addBack(randomNumber);
    size = myList->size();
    if(size != i)
      testSizeMany = false;
  }
  std::cout << "\tb) size() on list with many elements: ";
  if(testSizeMany)
    std::cout << "\tPASSED\n";
  else
    std::cout << "\t\tFAILED\n";

  //isEmpty() Final Result
  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tsize() Final Result: ";
  if(testZeroSize && testSizeMany)
    std::cout << "\t\t\t\tPASSED\n";
  else
    std::cout << "\t\t\t\tFAILED\n";
  delete myList;
}

// bool search(T value) const;
//Test search(T value) method:
void searchTest()
{
  std::cout << "\n3) Testing \"search(T value)\" method:\n";
  //Test search on empty list
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  bool testEmptyListSearch = true;
  srand(time (NULL));
  int randomNumber;
  for(int i = -1000; i < 1001; i++)
  {
      if(myList->search(i))
      {
        testEmptyListSearch = false;
      }
      randomNumber = rand() % 1000000;
      if(myList->search(randomNumber))
      {
        testEmptyListSearch = false;
      }
  }
  std::cout << "\ta) search on empty list: ";
  if(testEmptyListSearch)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";

  //Test search on list of size one
  delete myList;
  myList = new LinkedList<int>;
  bool testNonEmptyListSearch = true;
  int insideVal;
  for(int i = 0; i < 1000; i++)
  {
    randomNumber = rand() % 1000000 + 1;
    myList->addFront(randomNumber);
    if(!myList->search(randomNumber))
      testNonEmptyListSearch = false;
    if(i == 500) //At 500, start testing for a value in the middle of the list
      insideVal = randomNumber;
    if(i > 500)
    {
      if(!myList->search(insideVal))
      {
        testNonEmptyListSearch = false;
      }
    }
  }
  std::cout << "\tb) search on non-empty list: ";
  if(testNonEmptyListSearch)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";
  std::cout << "\tc) search on non-empty list, invalid values: ";
  bool testInvalidSearch = true;
  for(int i = 0; i < 1000; i++)
  {
    if(myList->search(-i))
    {
      testInvalidSearch = false;
    }
  }
  if(testInvalidSearch)
    std::cout << "\tPASSED\n";
  else
    std::cout << "\tFAILED\n";
  //search Final Result
  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tsearch Final Result: ";
  if(testEmptyListSearch && testNonEmptyListSearch)
    std::cout << "\t\t\t\tPASSED\n";
  else
    std::cout << "\t\t\t\tFAILED\n";

  delete myList;
}

//Test addBack method
void addBackTest()
{
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  std::vector<int> compareVec = {};
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 100; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addBack(randomNumber);
    compareVec.emplace ( compareVec.end(), randomNumber);
  }
  std::vector<int> newVec = myList->toVector();
  bool testAddBack = true;
  for(int i = 0; i < 100; i++)
  {
    if(newVec[i] != compareVec[i])
      testAddBack = false;
  }
  std::cout << "\n4) Testing \"addBack(T value)\" method:\n";
  std::cout << "\t\tAdding many random values to the back of\n" <<
                    "\t\ta LinkedList and the same values to the\n" <<
                    "\t\tback of a vector and then comparing them.\n";
  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\taddBack Final Result: ";
  if(testAddBack)
    std::cout << "\t\t\t\tPASSED\n";
  else
    std::cout << "\t\t\t\tFAILED\n";
  delete myList;
}

void addFrontTest()
{
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  std::vector<int> compareVec = {};
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 100; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addFront(randomNumber);
    compareVec.emplace ( compareVec.begin(), randomNumber);
  }
  std::vector<int> newVec = myList->toVector();
  bool testAddFront = true;
  for(int i = 0; i < 100; i++)
  {
    if(newVec[i] != compareVec[i])
      testAddFront = false;
  }
  std::cout << "\n5) Testing \"addFront(T value)\" method:\n";
  std::cout << "\t\tAdding many random values to the front of\n" <<
                    "\t\ta LinkedList and the same values to the\n" <<
                    "\t\tfront of a vector and then comparing them.\n";
  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\taddFront Final Result: ";
  if(testAddFront)
    std::cout << "\t\t\t\tPASSED\n";
  else
    std::cout << "\t\t\t\tFAILED\n";
  delete myList;
}

void removeBackTest()
{
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  std::vector<int> compareVec = {};
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 100; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addFront(randomNumber);
    compareVec.emplace ( compareVec.begin(), randomNumber);
  }
  std::vector<int> tempVec = myList->toVector();
  bool testRemoveBack = true;
  for(int j = 0; j < 100; j++)
  {
    for(unsigned int i = 0; i < compareVec.size(); i++)
    {
      if(tempVec[i] != compareVec[i])
        testRemoveBack = false;
    }
    myList->removeBack();
    std::vector<int> tempVec = myList->toVector();
    compareVec.erase(compareVec.end()-1);
  }
  std::cout << "\n7) Testing \"removeBack()\" method:\n";

  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tremoveBack Final Result: ";
  if(testRemoveBack)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";
  delete myList;
}

void removeFrontTest()
{
  LinkedList<int>* myList;
  myList = new LinkedList<int>;
  std::vector<int> compareVec = {};
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 100; i++)
  {
    randomNumber = rand() % 1000000;
    myList->addFront(randomNumber);
    compareVec.emplace ( compareVec.begin(), randomNumber);
  }
  std::vector<int> tempVec = myList->toVector();
  bool testRemoveFront = true;
  for(int j = 0; j < 100; j++)
  {
    for(unsigned int i = 0; i < compareVec.size(); i++)
    {
      if(tempVec[i] != compareVec[i])
        testRemoveFront = false;
    }
    myList->removeFront();
    std::vector<int> tempVec = myList->toVector();
    compareVec.erase(compareVec.begin());
  }
  std::cout << "\n8) Testing \"removeFront()\" method:\n";

  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tremoveFront Final Result: ";
  if(testRemoveFront)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tFAILED\n";
  delete myList;
}

void removeCompareTest()
{
  LinkedList<int>* myList1;
  myList1 = new LinkedList<int>;
  LinkedList<int>* myList2;
  myList2 = new LinkedList<int>;
  srand(time (NULL));
  int randomNumber;
  for(int i = 0; i < 100; i++)
  {
    randomNumber = rand() % 1000000;
    myList1->addFront(randomNumber);
    myList2->addFront(randomNumber);
  }

  std::vector<int> tempVec1 = myList1->toVector();
  std::vector<int> tempVec2 = myList2->toVector();
  bool testAddFront = true;
  for(int j = 0; j < 100; j++)
  {
    for(unsigned int i = 0; i < j - i; i++)
    {
      if(tempVec1[i] != tempVec2[i])
        testAddFront = false;
    }
    myList1->removeFront();
    myList2->removeFront();
    std::vector<int> tempVec1 = myList1->toVector();
    std::vector<int> tempVec2 = myList2->toVector();
  }
  std::cout << "\n9) Comparing \"removeFront()\" and \"removeBack()\" methods:\n";

  std::cout << "\t------------------------------------------------------\n";
  std::cout << "\tremoveFront Comparison Result: ";
  if(!testAddFront)
    std::cout << "\t\t\tPASSED\n";
  else
    std::cout << "\t\t\tSame functionality!\n";
  delete myList1;
  delete myList2;
}
