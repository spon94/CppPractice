#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  vector<string> strList;
  string inputStr;
  while (cin >> inputStr) {
    strList.push_back(inputStr);
  }
  for (string str : strList) {
    cout << str << endl;
  }
  return 0;
}
