#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<const char *> chatPtr = {"str1", " ", "world."};
  std::vector<std::string> strList;
  strList.assign(chatPtr.cbegin(), chatPtr.cend());
  return 0;
}
