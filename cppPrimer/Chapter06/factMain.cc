#include "Chapter6.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int num;
  cout << "Please input an integer:" << endl;
  cin >> num;
  cout << fact(num);
  return 0;
}
