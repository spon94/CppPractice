#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
  char ch;
  while (cin >> ch) {
    switch (ch) {
    case 'a':
      ++aCount;
      break;
    case 'e':
      ++eCount;
      break;
    case 'i':
      ++iCount;
      break;
    case 'o':
      ++oCount;
      break;
    case 'u':
      ++uCount;
      break;
    }
  }
  cout << aCount << ' ' << eCount << ' ' << iCount << ' ' << oCount << ' '
       << uCount;
}
