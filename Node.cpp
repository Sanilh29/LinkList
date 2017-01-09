#include <cstring>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(/*Student* student*/){
  node= NULL;
  value = 0;
}

Node::~Node(){
  delete &info;
  node = NULL;
}

Node* Node::getNext(){//get the next node pointer
  return node;
}

Student* Node::getStudent(){//get student pointer
  return info;
}

void Node::setNext(Node* newnode){//set the next pointer to the corresponding node point
  node = newnode;
}

/*void Node::setValue(int newvalue){
  value = newvalue;
}

int Node::getValue(){
  return value;
}*/

void Node::push_back(Student* student){
  Node* currentNode = this;
  for(currentNode; currentNode->getNext() != NULL; currentNode = currentNode->getNext());
  currentNode->setNext(new Node(student));
}
