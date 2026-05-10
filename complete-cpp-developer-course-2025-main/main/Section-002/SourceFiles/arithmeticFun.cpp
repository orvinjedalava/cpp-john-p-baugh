#include <iostream>

int main()
{
  int a{10};
  int b{3};

  int sum = a + b;
  int difference = a = b;
  int produce = a * b;
  int quotient = a / b;
  int remainder = a % b;

  int result{10};
  result += 15; // compound assignment operator for addition
  std::cout << "Result: " << result << std::endl;

  int myInt{5};
  myInt++; // post-increment operator
  std::cout << "MyInt: " << myInt << std::endl;

  myInt--; // post-decrement operator
  std::cout << "MyInt: " << myInt << std::endl;

  return 0;
}