#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

bool isShorter(const std::string &str1, const std::string &str2) {
  return str1.size() < str2.size();
}

bool check_size(const std::string &str, std::string::size_type sz) {
  return str.size() < sz;
}

void elimDups(std::vector<std::string> &strList) {
  std::stable_sort(strList.begin(), strList.end(),
                   [](const std::string &str1, const std::string &str2) {
                     return str1.size() < str2.size();
                   });
  auto unique = std::unique(strList.begin(), strList.end());
  strList.erase(unique, strList.end());
}

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz) {
  elimDups(words);
  std::stable_sort(words.begin(), words.end(),
                   [](const std::string &a, const std::string &b) {
                     return a.size() < b.size();
                   });

  auto wc = std::partition(words.begin(), words.end(),
                           std::bind(check_size, std::placeholders::_1, sz));

  auto count = words.end() - wc;
  std::cout << " " << count << " words of length " << sz << " or longer.\n";

  std::for_each(wc, words.end(),
                [](const std::string &s) { std::cout << s << " "; });
  std::cout << std::endl;
}

int main(int argc, char *argv[]) {
  std::vector<std::string> strList = {"list", "lis", "list", "l"};
  biggies(strList, 3);
  return 0;
}
