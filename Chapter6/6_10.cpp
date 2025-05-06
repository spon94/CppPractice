#include <iostream>
using namespace std;

void exChange(int *pointFir, int *pointerSec) {
  int tmp = 0;
  tmp = *pointFir;
  *pointFir = *pointerSec;
  *pointerSec = tmp;
}

int main(int argc, char *argv[]) {
  int numFir = 4, numSec = 5;
  cout << numFir << numSec;
  exChange(&numFir, &numSec);
  cout << numFir << numSec;
  return 0;
}
