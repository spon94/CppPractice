#include <algorithm>
#include <iostream>
#include <iterator>
#include <new>
#include <vector>

std::vector<int> *factory() {
  std::vector<int> *intVecPtr = new std::vector<int>{1, 2, 3, 4, 5};
  return intVecPtr;
}

void vecPrint(std::vector<int> *intVecPtr) {
  std::ostream_iterator<int> out(std::cout, " ");
  std::copy(intVecPtr->begin(), intVecPtr->end(), out);
}

int main(int argc, char *argv[]) {
  std::vector<int> *intVecPtr = factory();
  vecPrint(intVecPtr);
  delete intVecPtr;
  return 0;
}
