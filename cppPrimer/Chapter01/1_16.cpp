#include <iostream>
int main () {
  int res = 0, val = 0;
  std::cout << "please input numbers:" << std::endl;
  while (std::cin >> val) {
    res += val;
  }
  std::cout << "the result is " << res << std::endl;
  return 0;
}
