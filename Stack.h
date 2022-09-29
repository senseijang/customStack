#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
  struct Node {
    int data;
    Node* next;
  };

  Node* top;

  public:
    Stack();
    ~Stack();
    void push(int);
    void pop();
    void print();
};

#endif
