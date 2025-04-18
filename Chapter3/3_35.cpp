#include <iostream>
#include <iterator>
using namespace std;
int main(int argc, char *argv[]) {
  int numList[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *begin = std::begin(numList);
  int *end = std::end(numList);

  for (decltype(begin) i = begin; i < end; i++) {
    *i = 0;
  }
  for (int num : numList) {
    cout << num << endl;
  }
  return 0;
}
