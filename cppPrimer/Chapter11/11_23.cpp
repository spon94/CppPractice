#include <map>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  using firstName = std::vector<std::string>;
  std::multimap<std::string, firstName> nameBook;
  return 0;
}
