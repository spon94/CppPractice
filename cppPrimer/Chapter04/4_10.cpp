#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int num = 0;
  while (cin >> num) {
    if (num == 42) {
      break;
    } else {
      cout << num << ' ';
    }
  }
  return 0;
}
