#include <deque>
#include <iostream>
#include <list>

int main(int argc, char *argv[]) {
  std::list<int> numList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // 奇序列队列
  std::deque<int> oddDeque;
  // 偶序列队列
  std::deque<int> evenDeque;
  auto it = numList.begin();
  while (it != numList.end()) {
    if ((*it) % 2) {
      oddDeque.push_back(*it);
    } else {
      evenDeque.push_back(*it);
    }
    it++;
  }

  for (auto num : oddDeque) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  for (auto num : evenDeque) {
    std::cout << num << " ";
  }
  return 0;
}
