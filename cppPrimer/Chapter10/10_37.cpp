#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

int main(int argc, char *argv[]) {
  std::list<int> numList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::ostream_iterator<int> out(std::cout, " ");
  auto index_three = std::find(numList.crbegin(), numList.crend(), 3);
  auto index_seven = std::find(numList.crbegin(), numList.crend(), 7);
  std::copy(index_seven, ++index_three, out);
  return 0;
}
