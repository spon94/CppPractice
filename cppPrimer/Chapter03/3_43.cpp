#include <cstddef>
#include <iostream>
#include <iterator>
using namespace std;
int main(int argc, char *argv[]) {
  int numList[2][4] = {4, 32, 12, 63, 4324, 32, 12452, 4123};
  // for range usage;
  cout << "########## for range usage ##########" << endl;
  for (int (&row)[4] : numList) {
    for (int col : row) {
      cout << col << " ";
    }
    cout << endl;
  }
  // index usage;
  cout << "########## for range usage ##########" << endl;
  for (size_t i = 0; i != 2; i++) {
    for (size_t j = 0; j != 4; j++) {
      cout << numList[i][j] << " ";
    }
    cout << endl;
  }
  // pointer usage
  cout << "########## for pointer usage ##########" << endl;
  for (int (*p)[4] = begin(numList); p != end(numList); p++) {
    for (int *q = begin(*p); q != end(*p); q++) {
      cout << *q << ' ';
    }
    cout << endl;
  }
  return 0;
}
