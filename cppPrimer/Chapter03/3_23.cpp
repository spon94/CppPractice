#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  vector<int> numList{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int>::iterator it1 = numList.begin();
  vector<int>::iterator it2 = numList.end();
  for (; it1 != it2; ++it1) {
    (*it1) *= 2;
  }
  cout << endl;
  for (int num : numList) {
    cout << num << " " << endl;
  }
  return 0;
}
