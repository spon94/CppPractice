#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool isShorter(const std::string &str1, const std::string &str2) {
  return str1.size() < str2.size();
}

void elimDups(std::vector<std::string> &strList) {
  std::stable_sort(strList.begin(), strList.end(), isShorter);
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
