#include <iostream>
using namespace std;
bool hasBigger (const string& str) {
  for(char ch : str) {
    if (ch > 'z') {
      return true;
    }
  }
  return false;
}
void strToLower (string& str) {
  for(int i = 0; i < str.length(); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + ('a' - 'A');
    }
  }
}
int main (int argc, char *argv[]) {
  string str = "Hello,world.";
  if (hasBigger) {
    cout << "hasBigger." << endl;
  }
  strToLower(str);
  cout << str << endl;
  return 0;
}
