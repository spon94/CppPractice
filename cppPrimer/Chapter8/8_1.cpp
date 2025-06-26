#include <fstream>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>

std::istream &getData(std::istream &is) {
  std::string line;
  while (std::getline(is, line)) {
    std::cout << line << std::endl;
  }
  if (is.eof()) {
    std::cout << "End of stream reached\n";
  } else if (is.fail()) {
    std::cout << "Error occured during reading.\n";
  }

  is.clear();

  return is;
}

int main(int argc, char *argv[]) {
  // 标准输入
  std::cout << "Type input: \n";
  getData(std::cin);

  // 字符串
  std::istringstream iss("line1\nline2\nline3");
  getData(iss);

  // 文件
  std::ifstream file("data.txt");
  if (file) {
    getData(file);
  }
  return 0;
}
