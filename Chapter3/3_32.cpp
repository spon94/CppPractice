#include <cstddef>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int numList[10];
  int numCoptList[10];
  for (size_t i = 0; i < 10; i++) {
    numList[i] = i;
    numCoptList[i] = numList[i];
  }
  for (int num : numCoptList) {
    cout << num << " ";
  }
  return 0;
}
