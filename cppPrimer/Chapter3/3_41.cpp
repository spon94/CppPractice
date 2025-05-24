#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
using std::vector;
int main(int argc, char *argv[]) {
  int numList[] = {4, 21, 4, 213, 531, 123};
  vector<int> vectorList(std::begin(numList), std::end(numList));
  for (auto num : numList) {
    cout << num << " ";
  }
  return 0;
}
