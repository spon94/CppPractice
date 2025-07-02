#include <map>
#include <string>
#include <utility>
#include <vector>

int main(int argc, char *argv[]) {
  using child = std::pair<std::string, std::string>;
  std::map<std::string, std::vector<child>> neighborhood = {
      {"A", {{"a", "2025.07.02"}, {"b", "2025.07.01"}}}};
  return 0;
}
