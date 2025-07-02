#include <cctype>
#include <iostream>
#include <map>
#include <string>

std::string processWord(std::string &word) {
  std::string processed;
  for (char ch : word) {
    if (!std::ispunct(ch)) {
      processed += std::tolower(ch);
    }
  }
  return processed;
}

int main(int argc, char *argv[]) {
  std::map<std::string, std::string::size_type> count;
  std::string word;
  while (std::cin >> word) {
    std::string processed;
    processed = processWord(word);
    ++count[processed];
  }
  for (auto res : count) {
    std::cout << res.first << " occurs " << res.second << " times.\n";
  }
  return 0;
}
