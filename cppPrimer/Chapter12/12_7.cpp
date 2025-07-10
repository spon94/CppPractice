#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <vector>

std::shared_ptr<std::vector<int>> factory() {
  return std::make_shared<std::vector<int>>(
      std::initializer_list<int>{1, 2, 3});
}

void vecPrint(std::shared_ptr<std::vector<int>> intVecPtr) {
  std::ostream_iterator<int> out(std::cout, " ");
  std::copy(intVecPtr->begin(), intVecPtr->end(), out);
}

int main(int argc, char *argv[]) {
  vecPrint(factory());
  return 0;
}
