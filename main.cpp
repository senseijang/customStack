#include <iostream>
#include "Stack.h"

void br();

int main()
{
  Stack s;

  s.print();
  s.pop();

  br();

  s.push(1);
  s.push(2);
  s.push(3);
  s.print();

  br();

  s.pop();
  s.print();

  br();

  s.push(13);
  s.push(16);
  s.print();

  br();
}

void br()
{
  std::cout << std::endl;
}
