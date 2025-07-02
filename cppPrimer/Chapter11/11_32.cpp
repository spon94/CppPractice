#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::multimap<std::string, std::string> autherMap;

  autherMap.insert({"A", "a"});
  autherMap.insert({"B", "b"});
  autherMap.insert({"A", "c"});
  autherMap.insert({"B", "d"});

  for (auto auther : autherMap) {
    std::cout << "Auther " << auther.first << " writes book " << auther.second
              << std::endl;
  }
  return 0;
}
