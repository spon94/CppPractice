#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> intVec = {1, 2, 3, 4, 5};
  std::ostream_iterator<int> out(std::cout, " ");
  std::reverse_copy(intVec.begin(), intVec.end(), out);
  return 0;
}
