#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::istream_iterator<int> numList(std::cin), eof;
  std::vector<int> nums(numList, eof);
  std::vector<int> copyVec(nums.size());
  std::copy(nums.begin(), nums.end(), copyVec.begin());
  std::sort(copyVec.begin(), copyVec.end());
  std::ostream_iterator<int> out(std::cout, " ");
  std::copy(copyVec.begin(), copyVec.end(), out);
  return 0;
}
