#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<char> chVec = {'a', 'b', 'c'};
  std::string str(chVec.begin(), chVec.end());
  return 0;
}
