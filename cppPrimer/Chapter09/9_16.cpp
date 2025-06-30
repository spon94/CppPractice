#include <iostream>
#include <list>
#include <vector>

bool compareVector(std::vector<int> &vec, std::list<int> &lis) {
  if (vec.size() > lis.size()) {
    return true;
  } else if (vec.size() == lis.size()) {
    return false;
  } else {
    auto it = lis.begin();
    for (auto i = 0; i < vec.size(); ++i, ++it) {
      if (vec[i] > *it) {
        return true;
      } else if (vec[i] == *it) {
        continue;
      } else {
        return false;
      }
    }
    return false;
  }
}

int main(int argc, char *argv[]) {
  std::vector<int> vec = {7, 6, 3, 2};
  std::list<int> lis = {4, 2, 1};
  compareVector(vec, lis);
  return 0;
}
