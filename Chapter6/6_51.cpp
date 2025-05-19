#include <iostream>
using namespace std;

void f(double num1, int num2) { cout << "this is func 1." << endl; }

void f(int num1) { cout << "this is func 2." << endl; }

void f(int num1, int num2) { cout << "this is func 3." << endl; }

void f(double num1, double num2) { cout << "this is func 4." << endl; }

int main(int argc, char *argv[]) {
  f(2.56, 42);
  f(42);
  f(42, 0);
  f(2.56, 3.14);
  return 0;
}
