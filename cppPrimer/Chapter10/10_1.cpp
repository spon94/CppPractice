#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> numList = {1, 2, 3, 4, 3, 2, 1, 1, 1};
  std::cout << "number 3 occurs "
            << std::count(numList.begin(), numList.end(), 3) << " times.\n";
  return 0;
}
