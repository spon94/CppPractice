#include <iostream>

int main(int argc, char *argv[]) {
  int cap = 10;
  auto f = [cap](int a) { return cap + a; };
  std::cout << f(5);
  return 0;
}
