#include <iostream>

int main()
{
  // > Greater than
  // < Less than
  // >= Greater than or equal to
  // <= Less than or equal to
  // == Equal to
  // != Not equal to

  std::cout << std::boolalpha;

  int a{15};
  int b{20};

  std::cout << (a < b) << std::endl;

  bool areEqual = (a == b);
  std::cout << "Are a and b equal? " << areEqual << std::endl;

  return 0;
}