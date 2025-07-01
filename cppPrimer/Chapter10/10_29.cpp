#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::ifstream in("data");
  std::istream_iterator<std::string> file_it(in), eof;
  std::vector<std::string> strList(file_it, eof);
  for (auto str : strList) {
    std::cout << str << std::endl;
  }
  return 0;
}
