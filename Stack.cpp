#include <iostream>
#include "Stack.h"

Stack::Stack()
{
  top = NULL;
  std::cout << "Stack init!\n";
}

void Stack::push(int num)
{
  Node *temp = new Node;
  temp->data = num;
  temp->next = top;
  top = temp;
}

void Stack::print()
{
  Node *temp;
  temp = top;

  if (top == NULL)
  {
    std::cout << "The stack is empty...\n";
  }
  else
  {
    std::cout << "Current Stack\n";
    while (temp != NULL)
    {
      std::cout << temp->data << "\n";
      temp = temp->next;
    }
  }
}

Stack::~Stack()
{
  Node *temp = top;
  std::cout << "Stack has been deleted\n";

  while (temp != NULL)
  {
    top = top->next;
    delete temp;
    temp = top;
  }
}

void Stack::pop()
{
  if (top == NULL)
  {
    std::cout << "Attempted stack underflow!\n";
    return;
  }

  Node *temp = top;
  top = top->next;
  delete temp;
}
