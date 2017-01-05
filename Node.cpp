#include <cstring>
#include <iostream>
#include "node.h"

using namespace std;

Node::Node(){
  node= NULL;
  value = 0;
}

Node::~Node(){
  delete &value;
  node = NULL;
}

Node* Node::getNext(){//get the next node pointer
  return node;
}

Student* Node::getStudent(){//get student pointer
  return NULL;
}

void Node::setNext(Node* newnode){//set the next pointer to the corresponding node point
  node = newnode;
}

void Node::setValue(int newvalue){
  value = newvalue;
}

int Node::getValue(){
  return value;
}
