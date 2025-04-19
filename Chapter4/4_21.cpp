#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
  vector<int> numList = {34, 213, 4321, 643, 1, 26, 431};
  for (int &num : numList) {
    num = ((num % 2) == 1) ? num * 2 : num;
    cout << num << " ";
  }
  return 0;
}
