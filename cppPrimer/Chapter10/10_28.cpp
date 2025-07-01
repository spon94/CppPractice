#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>

int main(int argc, char *argv[]) {
  std::deque<int> numList = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::deque<int> targetOne;
  std::deque<int> targetTwo;
  std::deque<int> targetThree;
  std::copy(numList.cbegin(), numList.cend(),
            std::inserter(targetOne, targetOne.begin()));
  std::copy(numList.cbegin(), numList.cend(), std::back_inserter(targetTwo));
  std::copy(numList.cbegin(), numList.cend(), std::front_inserter(targetThree));

  for (auto num : targetOne) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  for (auto num : targetTwo) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  for (auto num : targetThree) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  return 0;
}
