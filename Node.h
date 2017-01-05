#include <cstring>
#include <iostream>

using namespace std;

class Student;

class Node{
 private:
  Student* student;
  Node* node;
  int value;
 public:
  Node(); //create a new node
  ~Node(); //deleting the current node, including the corresponding student
  void setNext(Node* newnode); //set the next pointer to the corresponding node point
  Student* getStudent(); //get student pointer
  Node* getNext(); //get the next Node pointer
  void setValue (int newvalue);
  int getValue();
};
//instead of value, do student
