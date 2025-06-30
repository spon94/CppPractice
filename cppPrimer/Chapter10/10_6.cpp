#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> numList = {1, 2, 3, 4, 5, 6};
  for (auto i : numList) {
    std::cout << i << " ";
  }
  std::fill_n(numList.begin(), 6, 1);
  std::cout << "\nAfter fill_n\n";
  for (auto i : numList) {
    std::cout << i << " ";
  }
  return 0;
}
