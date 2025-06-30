#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  vector<int> numList(10);
  for (decltype(numList.size()) i = 0; i < numList.size(); i++) {
    numList[i] = i;
  }
  // output of numList
  for (auto num : numList) {
    cout << num << " ";
  }
  // output of numCopyList
  cout << endl;
  vector<int> numCopyList = numList;
  for (auto num : numCopyList) {
    cout << num << " ";
  }
  return 0;
}
