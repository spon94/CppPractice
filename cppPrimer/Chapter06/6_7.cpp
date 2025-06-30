#include <iostream>
using namespace std;

int callCount() {
  static int count = 0;
  return count++;
}

int main(int argc, char *argv[]) {
  for (int i = 0; i < 5; i++) {
    cout << callCount() << endl;
  }
  return 0;
}
