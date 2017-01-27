B//Sanil Hattangadi, creates the method for Nodes
#include <cstring>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(Student* student){//keeps track of the students info
  info = student;//places the info into students pointer
  node = NULL;
}

Node::~Node(){//deleting the current node, including the correponding student
  delete &info;//deletes info
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

void Node::push_back(Student* student){
  Node* currentNode = this;
  for(currentNode; currentNode != NULL; currentNode = currentNode->getNext());
  currentNode->setNext(new Node(student));
}

Node* Node::end(){
  Node* currentNode = this;
  for(currentNode; currentNode->getNext() != NULL; currentNode = currentNode->getNext());
  return currentNode;
}

/*void Node::erase(){
  if (node){
    node->erase();
    delete this;
  }
  delete &info;

}*/
