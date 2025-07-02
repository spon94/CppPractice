#include <algorithm>
#include <iostream>
#include <list>

int main(int argc, char *argv[]) {
  std::list<int> numList = {1, 2, 3, 0, 2, 2, 3, 0, 3};
  auto index = std::find(numList.crbegin(), numList.crend(), 0);
  std::cout << *index << std::endl;
  return 0;
}
