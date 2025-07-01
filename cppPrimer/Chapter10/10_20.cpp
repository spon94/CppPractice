#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"a", "abc", "acbdefg", "abcdefgh"};
  for (auto str : strList) {
    std::cout << str << " ";
  }
  std::cout << "\n After call count_if.\n";
  auto count = std::count_if(strList.begin(), strList.end(),
                             [](std::string &s) { return s.size() > 6; });
  std::cout << count << " strings longer than 6.\n";
  return 0;
}
