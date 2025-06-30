#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<double> numList = {1, 2, 3, 4, 56, 7, 8, 9};
  std::cout << "the sum is "
            << std::accumulate(numList.cbegin(), numList.cend(), 0)
            << std::endl;
  return 0;
}
