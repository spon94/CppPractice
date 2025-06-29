#include <iostream>
#include <string>

std::string &enrichName(std::string &str, std::string prefix,
                        std::string suffix) {
  str.insert(0, prefix);
  str.append(suffix);
  return str;
}

int main(int argc, char *argv[]) {
  std::string str = "Wan";
  std::string prefix = "Mr";
  std::string suffix = "Jr.";
  enrichName(str, prefix, suffix);
  std::cout << str << std::endl;
  return 0;
}
