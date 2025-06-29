#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> numList1 = {4, 3, 2, 1};
  std::vector<int> numList2 = {1, 2, 3, 4, 5};
  if (numList1 == numList2) {
    std::cout << "numList1 euqals numList2,\n";
  } else if (numList1 > numList2) {
    std::cout << "numList1 is bigger.\n";
  } else {
    std::cout << "numList2 is bigger.\n";
  }
  return 0;
}
