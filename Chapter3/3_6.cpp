#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  string str1 = "helloworld";
  for (auto &c : str1) {
    c = 'X';
  }
  cout << str1;
  return 0;
}
