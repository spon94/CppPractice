#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  string str1, str2;

  cout << "Please input two strings, and program will return shorter "
          "one."
       << endl;
  cin >> str1 >> str2;
  do {
    if (str1.size() < str2.size()) {
      cout << str2 << endl;
    } else {
      cout << str1 << endl;
    }
    cout << "Please input two strings, and program will return shorter "
            "one."
         << endl;
  } while (cin >> str1 >> str2);
  return 0;
}
