#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"str", "trs", "str"};
  std::cout << "string str occurs "
            << std::count(strList.begin(), strList.end(), "str") << " times.\n";
  return 0;
}
