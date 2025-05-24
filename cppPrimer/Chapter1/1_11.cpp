#include <iostream>
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
 while(v1 >= v2) {
  res += v1;
  v1--;
 }
 std::cout << "the result is " << res << std::endl;
}
