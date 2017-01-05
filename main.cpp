#include <cstring>
#include <iostream>
#include "Node.h"

using namespace std;

void add(int newvalue);
void print (Node* node);

Node* head = NULL;

int main(){
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);
}

void add (int newvalue){
  Node* current = head;
  if (current==NULL){
    head = new Node();
    head->setValue(newvalue);
  }
  else {
    while (current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newvalue);
  }
}

void print(Node* node){
  if (node==head){
    cout << "List:" << endl;
  }
  if (node != NULL){
    cout << node->getValue() << " " << endl;
    print(node->getNext());
  }
  else{
    //do nothing
  }
}
