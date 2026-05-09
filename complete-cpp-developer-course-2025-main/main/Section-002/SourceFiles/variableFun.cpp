#include <iostream>

int main()
{
  int myInt;  // declaration
  myInt = 15; // initialization

  double myDouble = 3.14159; // declaration and initialization in one line

  int x = 10; // copy initialization ( assignment)
  int y(10);  // direct initialization
  int z{10};  // uniform initialization ( more modern C++ style since C++11 )

  double pi = 3; // widening conversion ( no lost of data )

  double stateTaxRate = 0.06; // camel-case naming convention ( common in C++ )

  std::cout << myInt << std::endl;
  std::cout << myDouble << std::endl;

  return 0;
}