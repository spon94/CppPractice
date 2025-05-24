#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  string inputStr;
  vector<string> strList;
  while (cin >> inputStr) {
    strList.push_back(inputStr);
  }
  cout << endl;
  for (auto &c : strList) {
    transform(c.begin(), c.end(), c.begin(),
              [](unsigned char c) { return toupper(c); });
    cout << c << endl;
  }
  return 0;
}
