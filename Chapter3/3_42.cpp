#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  int numList[] = {4, 21, 4, 213, 531, 123};
  vector<int> vectorList(std::begin(numList), std::end(numList));
  // for (auto num : numList) {
  //   cout << num << " ";
  // }
  //  copy from vectorList to numList2
  int numList2[vectorList.size()];
  for (decltype(vectorList.size()) i = 0; i < vectorList.size(); i++) {
    numList2[i] = vectorList[i];
  }
  for (int num : numList2) {
    cout << num << " ";
  }
  return 0;
}
