#include <string>
#include <utility>
#include <vector>

int main(int argc, char *argv[]) {
  // 1
  std::vector<std::pair<std::string, int>> pairVec;
  // 2
  using pairType = std::pair<std::string, int>;
  std::vector<pairType> pairVec2;
  // 3
  typedef std::pair<std::string, int> pairType2;
  std::vector<pairType2> pairVec3;
  return 0;
}
