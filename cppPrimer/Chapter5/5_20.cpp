#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  string str, tmpStr;
  tmpStr = str;
  bool flag = true;
  while (cin >> str) {
    if (str != tmpStr) {
      tmpStr = str;
    } else {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "No duplication words occurs continously.";
  } else {
    cout << str;
  }
  return 0;
}
