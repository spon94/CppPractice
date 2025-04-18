#include <cstddef>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int numList[10];
  for (size_t i = 0; i < 10; i++) {
    numList[i] = i;
  }
  for (int num : numList) {
    cout << num << " ";
  }
  return 0;
}
