#include <iostream>
using namespace std;

int biggerNum (int* point, int num) {
  if (*point > num) {
    return *point;
  }
  else {
    return num;
  }
}

int main (int argc, char *argv[]) {
  int num = 3;
  int tmp = 5;
  int* point = &tmp;
  cout << biggerNum(point, num);
  return 0;
}
