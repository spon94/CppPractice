#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char *argv[]) {
  std::unordered_map<std::string, std::string::size_type> count;
  std::string word;
  while (std::cin >> word) {
    ++count[word];
  }
  for (auto res : count) {
    std::cout << res.first << " occurs " << res.second << " times.\n";
  }
  return 0;
}
