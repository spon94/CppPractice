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
  int num;
  cout << "Please input an integer:" << endl;
  cin >> num;
  cout << fact(num);
  return 0;
}
