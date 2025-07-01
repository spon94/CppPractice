#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool biggerFive(const std::string &str) { return str.size() > 5; }

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"a", "abc", "abcde", "abcdefg"};
  std::partition(strList.begin(), strList.end(), biggerFive);
  for (auto str : strList) {
    std::cout << str << " ";
  }
  return 0;
}
