#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> numVec = {1, 2, 3, 4, 5};
  std::ostream_iterator<int> out(std::cout, " ");
  std::copy(numVec.crbegin(), numVec.crend(), out);
  return 0;
}
