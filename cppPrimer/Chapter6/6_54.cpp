#include <vector>

int f(int num1, int num2);
// decltype
std::vector<decltype(f) *>;
// using
using fp = int (*)(int, int);
