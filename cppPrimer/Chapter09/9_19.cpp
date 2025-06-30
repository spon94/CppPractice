#include <iostream>
#include <list>
#include <string>

int main(int argc, char *argv[]) {
  std::string str;
  std::list<std::string> strList;
  while (std::cin >> str) {
    strList.push_back(str);
  }
  auto it = strList.begin();
  while (it != strList.end()) {
    std::cout << *it << std::endl;
    it++;
  }
  return 0;
}
