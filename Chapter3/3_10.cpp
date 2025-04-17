#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  string str1;
  cout << "Please input a line with punctuations:" << endl;
  getline(cin, str1);
  for (auto c : str1) {
    if (!ispunct(c)) {
      cout << c;
    }
  }
  return 0;
}
