#include <iostream>

int main(int argc, char *argv[]) {
  auto f = [](int a, int b) { return a + b; };
  std::cout << f(2, 3);
  return 0;
}
