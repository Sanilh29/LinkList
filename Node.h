#include <cstring>
#include <iostream>

using namespace std;

class Student;

class Node{
 private:
  Student* student;
  Node* node;
 public:
  Node(); //create a new node
  ~Node(); //deleting the current node, including the corresponding student
  //void deleteNode();
  //Node* createNode(Student*);
  void setNext(Node*); //set the next pointer to the corresponding node point
  Student* getStudent(); //get student pointer
  Node* getNext(); //get the next Node pointer
};
