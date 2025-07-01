#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> numList = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
  std::vector<int> target;
  std::unique_copy(numList.cbegin(), numList.cend(),
                   std::inserter(target, target.begin()));
  for (auto i : target) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
