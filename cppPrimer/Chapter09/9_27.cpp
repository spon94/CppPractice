#include <forward_list>
#include <iostream>

int main(int argc, char *argv[]) {
  std::forward_list<int> fList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto prev = fList.before_begin();
  auto curr = fList.begin();
  while (curr != fList.end()) {
    if (*curr % 2) {
      ++curr;
      fList.erase_after(prev++);
    } else {
      prev = curr;
      ++curr;
    }
  }
  for (auto num : fList) {
    std::cout << num << " ";
  }
  return 0;
}
