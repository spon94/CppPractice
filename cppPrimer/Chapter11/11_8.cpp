#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void delDuplication(std::vector<std::string> &strList, std::string &word) {
  auto flag = std::find(strList.cbegin(), strList.cend(), word);
  if (flag == strList.cend()) {
    strList.push_back(word);
    std::cout << word << " insert successfully.\n";
  } else {
    std::cout << "Duplicate word " << word << " occurs.\n";
  }
}

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"a", "b"};
  std::string word;
  std::ostream_iterator<std::string> out(std::cout, " ");
  while (std::cin >> word) {
    delDuplication(strList, word);
    std::cout << "Word list contains: ";
    std::copy(strList.begin(), strList.end(), out);
    std::cout << std::endl;
  }
  return 0;
}
