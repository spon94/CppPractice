#include <iostream>
using namespace std;

int getSum (initializer_list<int> li) {
  int sum = 0;
  for(int num : li) {
    sum += num;
  }
  return sum;
}

int main (int argc, char *argv[]) {
  cout << getSum({4,2,1,54,1,2}) << endl;
  return 0;
}
