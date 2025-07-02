#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::multimap<std::string, std::string> autherMap;

  autherMap.insert({"A", "a"});
  autherMap.insert({"B", "b"});
  autherMap.insert({"A", "c"});
  autherMap.insert({"B", "d"});

  std::string autherFind = "A";
  std::string bookFind = "a";

  std::cout << "Before erase.\n";
  for (auto auther : autherMap) {
    std::cout << "Auther " << auther.first << " writes book " << auther.second
              << std::endl;
  }

  auto findRes = autherMap.find(autherFind);
  while (findRes != autherMap.end() && findRes->first == autherFind) {
    if (findRes->second == bookFind) {
      findRes = autherMap.erase(findRes);
      std::cout << "Delete auther " << autherFind << " with his book "
                << bookFind << "\n";
    }
    ++findRes;
  }
  std::cout << "After erase.\n";
  for (auto auther : autherMap) {
    std::cout << "Auther " << auther.first << " writes book " << auther.second
              << std::endl;
  }
  return 0;
}
