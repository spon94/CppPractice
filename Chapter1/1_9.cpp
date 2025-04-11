#include <iostream>
int main () {
  int val = 50;
  int res = 0;
  while (val <= 100) {
    res += val;
    val++;
  }
  std::cout << "the sum is " << res << std::endl;
  return 0;
}
