#include <iostream>
#include <map>
#include <string>
#include <vector>

void addMenber(std::map<std::string, std::vector<std::string>> &neighborhood,
               std::string lastname, std::vector<std::string> firstname) {
  for (auto child : firstname) {
    neighborhood[lastname].push_back(child);
  }
}

int main(int argc, char *argv[]) {
  // map->first: lastname; map->second: firstname;
  std::map<std::string, std::vector<std::string>> neighborhood = {
      {"A", {"a", "b", "c"}}, {"B", {"a", "b", "c"}}, {"C", {"a", "b", "c"}}};
  // add family
  std::string addLastname = "D";
  std::vector<std::string> addFirstname = {"a", "b", "c"};
  addMenber(neighborhood, addLastname, addFirstname);
  // add child
  std::string family = "D";
  std::vector<std::string> child = {"d"};
  addMenber(neighborhood, family, child);
  // print
  for (auto family : neighborhood) {
    std::cout << "Family " << family.first << " have " << family.second.size()
              << " children: ";
    for (auto child : family.second) {
      std::cout << child << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
