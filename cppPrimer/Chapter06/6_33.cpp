#include <iostream>
#include <vector>
using namespace std;

void printVector (const std::vector<int>& intList, size_t index = 0) {
  if (index > intList.size()) {
    return;
  }

  std::cout << intList[index] << " ";

  printVector(intList, index+1);
}

int main (int argc, char *argv[]) {
  std::vector<int> intList = {1,3,2,1,4};
  printVector(intList);
  return 0;
}
