//Sanil Hattangadi, creates the method for Nodes
#include <cstring>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(Student* student){//keeps track of the students info
  info = student;//places the info into students pointer
}

Node::~Node(){//deleting the current node, including the correponding student
  delete &info;//deletes info
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
