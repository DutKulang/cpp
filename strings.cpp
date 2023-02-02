#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string str1 = "Hello, ";
  std::string str2 = "world!";

  std::stringstream ss;
  ss << str1 << str2;

  std::string result = ss.str();
  std::cout << result << std::endl;  // Output: Hello, world!

  return 0;
}
