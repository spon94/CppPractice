#include <iostream>
int main () {
 
 int val = 10;
 int res = 0;
 while (val > 0) {
  res += val;
  val--;
 }
 std::cout << "the sum from 10 to 0 is " << res << std::endl;
 return 0;
}
