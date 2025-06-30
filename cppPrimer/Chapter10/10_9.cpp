#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &strList) {
  std::sort(strList.begin(), strList.end());
  auto unique = std::unique(strList.begin(), strList.end());
  strList.erase(unique, strList.end());
}

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"list", "lis", "list", "l"};
  elimDups(strList);
  for (auto str : strList) {
    std::cout << str << " ";
  }
  return 0;
}
