#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string str = "ab2c3d7R4E6";
  std::string num = "0123456789";
  std::string word = "RabcdefgABCDEFG";

  std::string::size_type pos = 0;
  while ((pos = str.find_first_of(num, pos)) != std::string::npos) {
    std::cout << "found number at index: " << pos << " element is " << str[pos]
              << std::endl;
    ++pos;
  }

  pos = 0;
  while ((pos = str.find_first_of(word, pos)) != std::string::npos) {
    std::cout << "found word at index: " << pos << " element is " << str[pos]
              << std::endl;
    ++pos;
  }
  return 0;
}
