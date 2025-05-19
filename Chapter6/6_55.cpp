#include <iostream>
#include <vector>
using namespace std;
using numPoiner = int (*)(int, int);

int numAdd(int num1, int num2) { return num1 + num2; }
int numSub(int num1, int num2) {

  return (num1 > num2) ? num1 - num2 : num2 - num1;
}
int numMul(int num1, int num2) { return num1 * num2; }
int numDev(int num1, int num2) { return (!num2) ? num1 / num2 : 0; }

int main(int argc, char *argv[]) {
  std::vector<numPoiner> numPoinerList = {numAdd, numSub, numMul, numDev};
  for (auto pointer : numPoinerList) {
    cout << pointer << endl;
  }
  return 0;
}
