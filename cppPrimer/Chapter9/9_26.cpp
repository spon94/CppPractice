#include <list>
#include <vector>

std::list<int> &delOdd(std::list<int> &lis) {
  auto it = lis.begin();
  while (it != lis.end()) {
    if ((*it) % 2) {
      lis.erase(it);
    }
  }
  return lis;
}
std::vector<int> &delEven(std::vector<int> &vec) {
  auto it = vec.begin();
  while (it != vec.end()) {
    if (!((*it) % 2)) {
      vec.erase(it);
    }
  }
  return vec;
}

int main(int argc, char *argv[]) {
  std::vector<int> vec = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  std::list<int> lis = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  delEven(vec);
  delOdd(lis);
  return 0;
}
