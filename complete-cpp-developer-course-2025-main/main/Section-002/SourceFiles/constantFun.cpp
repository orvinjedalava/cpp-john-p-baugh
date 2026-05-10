#include <iostream>
#include <string>

int main()
{
  const double MY_PI{3.14159};
  const std::string MY_NAME("John Doe");

  std::cout << "The value of pi is: " << MY_PI << std::endl;
  std::cout << "My name is: " << MY_NAME << std::endl;

  return 0;
}