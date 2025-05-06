#include <iostream>
using namespace std;
int fact(int num) {
  int result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }
  return result;
}
int main(int argc, char *argv[]) {
  cout << fact(5);
  return 0;
}
