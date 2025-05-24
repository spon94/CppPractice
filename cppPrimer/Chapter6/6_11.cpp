#include <iostream>
using namespace std;
void exChange(int& numFir,int& numSec){
  int tmp = 0;
  tmp = numFir;
  numFir = numSec;
  numSec = tmp;
}
int main (int argc, char *argv[]) {
  int numFir = 1, numSec  = 5;
  exChange(numFir, numSec);
  cout << numFir << "  " << numSec;
  return 0;
}
