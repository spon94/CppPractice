#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  // 数组比较
  int arrayList1[] = {5, 3, 2, 1};
  int arrayList2[] = {5, 4, 2, 1};
  bool arrayFlag = true;
  for (size_t i = 0; i < size(arrayList1); i++) {
    if (arrayList1[i] < arrayList2[i]) {
      arrayFlag = false;
    }
  }
  if (!arrayFlag) {
    cout << "arrayList2 is bigger." << endl;
  } else {
    cout << "arrayList1 is bigger." << endl;
  }
  // vector 比较
  vector<int> vectorList1 = {5, 3, 2, 1};
  vector<int> vectorList2 = {4, 3, 2, 1};
  bool vectorFlag = true;
  for (decltype(vectorList1.size()) i = 0; i < vectorList1.size(); i++) {
    if (vectorList1[i] < vectorList2[i]) {
      vectorFlag = false;
    }
  }
  if (!vectorFlag) {
    cout << "vectorList2 is bigger." << endl;
  } else {
    cout << "vectorList1 is bigger." << endl;
  }
  return 0;
}
