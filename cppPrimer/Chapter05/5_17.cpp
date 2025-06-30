#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  vector<int> numList1 = {3, 5, 7, 3, 2, 1, 5};
  vector<int> numList2 = {3, 5, 7, 3};
  bool flag = true;
  if (numList1.size() < numList2.size()) {
    for (decltype(numList1.size()) i = 0; i != numList1.size(); ++i) {
      if (numList1[i] != numList2[i]) {
        flag = false;
        break;
      }
    }
  } else {
    for (decltype(numList1.size()) i = 0; i != numList2.size(); ++i) {
      if (numList1[i] != numList2[i]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    cout << "True.";
  } else {
    cout << "False.";
  }
  return 0;
}
