#include <iostream>
#include <vector>

bool findVal(std::vector<int> &intVector, int flagNum) {
  for (auto val : intVector) {
    if (val == flagNum) {
      return true;
    }
  }
  return false;
}

int main(int argc, char *argv[]) {
std:
  std::vector<int> intList = {1, 3, 5, 65, 23, 57, 23};
  if (findVal(intList, 23)) {
    std::cout << "find num.\n";
  }
  return 0;
}
