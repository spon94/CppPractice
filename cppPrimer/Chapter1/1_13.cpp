#include <iostream>
// 1_9.cpp
int main () {

  int res = 0;
  for (int i = 0; i <= 50; i++) {
    res += i;
  }
  std::cout << "the sum is " << res << std::endl;
  return 0;
}
// 1_10.cpp
int main () {

 int res = 0;
 for (int i = 10; i > 0; i--) {
   res += i;
 }
 std::cout << "the sum from 10 to 0 is " << res << std::endl;
 return 0;
}
// 1_11.cpp
int main() {

 int v1 = 0, v2 = 0;
 int res = 0;
 int tmp = 0;
 std::cout << "please input two integers:" << std::endl;
 std::cin >> v1 >> v2;
 if(v1 < v2) {
   tmp = v1;
   v1 = v2;
   v2 = tmp;
 }
 for (int i = v2; v2 <= v1; i++) {
   res += i;
 }
 std::cout << "the result is " << res << std::endl;
 return 0;
}
