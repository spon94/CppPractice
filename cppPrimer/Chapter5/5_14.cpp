#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  vector<string> strList;
  string str = "";
  string maxStr = "";
  int maxStrCount = 0;
  int tmpStrCount = 0;
  string tmpStr = str;
  while (cin >> str) {
    strList.push_back(str);
    if (str != tmpStr) {
      tmpStr = str;
      tmpStrCount = 1;
    } else {
      ++tmpStrCount;
      if (tmpStrCount > maxStrCount) {
        maxStrCount = tmpStrCount;
        maxStr = tmpStr;
      }
    }
  }
  for (string st : strList) {
    cout << st << " ";
  }
  cout << endl;
  // 如果每个单词均只出现一次，则取最后出现的单词为结果。
  if (!maxStrCount) {
    cout << strList[strList.size() - 1] << " occurs 1 time.";
  } else {
    cout << maxStr << " occurs " << maxStrCount << " times.";
  }
  return 0;
}
