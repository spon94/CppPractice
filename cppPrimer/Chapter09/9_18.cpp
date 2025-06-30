#include <deque>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string str;
  std::deque<std::string> strDeque;
  while (std::cin >> str) {
    strDeque.push_back(str);
  }
  for (auto i : strDeque) {
    std::cout << i << std::endl;
  }
  return 0;
}
