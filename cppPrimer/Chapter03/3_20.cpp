#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  int inputNum, result;
  vector<int> numList;
  cout << "please input some integers: " << endl;
  while (cin >> inputNum) {
    numList.push_back(inputNum);
  }
  for (decltype(numList.size()) i = 0; i < numList.size(); i++) {
    result = numList[i] + numList[numList.size() - 1 - i];
    cout << "the " << i + 1 << " number plus the " << numList.size() - i
         << " number result is " << result << endl;
  }
  return 0;
}
