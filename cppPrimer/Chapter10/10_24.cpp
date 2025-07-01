#include <functional>
#include <iostream>
#include <string>
#include <vector>

bool check_size(const std::string &s, std::string::size_type sz) {
  return s.size() >= sz;
}

int main(int argc, char *argv[]) {
  std::vector<int> lenList = {1, 2, 3, 4, 5, 6};
  std::string str = "abcde";

  auto judge = std::bind(check_size, str, std::placeholders::_1);
  for (auto len : lenList) {
    if (judge(len)) {
      continue;
    } else {
      std::cout << "string length shorter than " << len << std::endl;
    }
  }
  return 0;
}
