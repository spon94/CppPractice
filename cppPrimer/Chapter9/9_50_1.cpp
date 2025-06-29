#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"1.1", "2.2"};
  double result = 0;
  for (auto str : strList) {
    result += std::stod(str);
  }
  std::cout << result << std::endl;
  return 0;
}
