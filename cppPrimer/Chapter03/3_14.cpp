#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  int num;
  vector<int> intList;
  while (cin >> num) {
    intList.push_back(num);
  }
  for (auto i : intList) {
    cout << i << " ";
  }
  return 0;
}
