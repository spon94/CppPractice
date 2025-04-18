#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  // string 比较
  string str1 = "Hello";
  string str2 = "World";
  if (str1 > str2) {
    cout << "string 1 is bigger." << endl;
  } else {
    cout << "string 2 is bigger." << endl;
  }
  // char array 比较
  char charArray1[] = "Hello";
  char charArray2[] = "World";
  if (strcmp(charArray1, charArray2) > 0) {
    cout << "char arrat 1 is bigger." << endl;
  } else {
    cout << "char array 2 is bigger." << endl;
  }
  return 0;
}
