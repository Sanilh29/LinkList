//Sanil Hattangadi, the main method tests the Nide.h and Node.cpp classes and header
//I create 3 false students with a gpa and then print them out in the order they were added
#include <cstring>
#include <vector>
#include <iostream>
#include "Node.h"

using namespace std;

class Student{//create student class that gets an already 
public:
  Student(int a){
    id= a;
  }
  int getId(){
    return id;
  }
private:
  int id;
};

int main(){//create the nodes to test
  Student* s1 = new Student(1);
  Student* s2 = new Student(2);
  Student* s3 = new Student(3);
  
  Node* header = new Node(s1);
  header->push_back(s2);
  header->push_back(s3);

  for(Node* currentNode = header; currentNode->getNext() != NULL; currentNode = currentNode->getNext()){//prints out all the nodes but the last one cause the last one is null
    cout << currentNode->getStudent()->getId() << endl;
  }
  cout << header->end()->getStudent()->getId() << endl;//prints out last node
}
/*
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
  }*/
