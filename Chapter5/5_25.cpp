#include <iostream>
#include <stdexcept>
using namespace std;
int main(int argc, char *argv[]) {
  int num1, num2;
  char answer;
  while (true) {
    try {
      cout << "Please type two integer:" << endl;
      cin >> num1 >> num2;
      if (num2 == 0) {
        throw runtime_error(
            "Divide number can not be zero, do you want to retype?(Y/N)\n");
        cin >> answer;
      }
      cout << "result: " << num1 / num2 << endl;
      break;
    } catch (runtime_error &e) {
      cout << e.what();
      cin >> answer;
      if (answer == 'n' || answer == 'N') {
        break;
      }
    }
  }
  return 0;
}
