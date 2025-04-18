#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  char array1[] = "Hello, ";
  char array2[] = "world.";
  char arrayCat[strlen(array1) + strlen(array2) + 1];
  strcat(array1, array2);
  strcpy(arrayCat, array1);
  for (char ch : arrayCat) {
    cout << ch;
  }
  return 0;
}
