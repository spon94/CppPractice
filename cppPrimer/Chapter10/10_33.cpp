#include <fstream>
#include <iostream>
#include <istream>
#include <iterator>
#include <string>

void getPrint(std::string &inputFile, std::string &oddFile,
              std::string &evenfile) {
  std::ifstream in(inputFile);
  std::istream_iterator<int> allNums(in), eof;

  std::ofstream odd(oddFile);
  std::ofstream even(evenfile);
  std::ostream_iterator<int> oddOut(odd, " ");
  std::ostream_iterator<int> evenOut(even, "\n");

  std::cout << "Initialize finished.\n";

  while (allNums != eof) {
    auto num = *allNums++;
    if (num % 2) {
      *oddOut++ = num;
      std::cout << "get one odd numbers " << num << std::endl;
    } else {
      *evenOut++ = num;
      std::cout << "get one even numbers " << num << std::endl;
    }
  }
}

int main(int argc, char *argv[]) {
  std::string inputFile = "1033";
  std::string oddFile = "oddFile";
  std::string evenfile = "evenfile";
  getPrint(inputFile, oddFile, evenfile);
  return 0;
}
