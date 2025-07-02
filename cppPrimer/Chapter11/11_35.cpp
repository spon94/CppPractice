#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

std::map<std::string, std::string> buildMap(std::ifstream &inputFile) {
  std::map<std::string, std::string> maps;
  std::string key;
  std::string value;
  while (inputFile >> key && std::getline(inputFile, value)) {
    if (value.size()) {
      //      maps[key] = value.substr(1);
      maps.insert({key, value.substr(1)});
    } else {
      std::cout << "Error.\n";
    }
  }
  return maps;
}

std::string transform(const std::string &str,
                      const std::map<std::string, std::string> &maps) {
  auto mapValue = maps.find(str);
  if (mapValue != maps.end()) {
    return mapValue->second;
  } else {
    return str;
  }
}

void getTransformed(std::ifstream &maps, std::ifstream &inputFile) {
  auto transformMap = buildMap(maps);
  std::string line;
  while (std::getline(inputFile, line)) {
    std::istringstream stream(line);
    std::string word;
    bool head = true;
    while (stream >> word) {
      if (head) {
        head = false;
      } else {
        std::cout << " ";
      }
      std::cout << transform(word, transformMap);
    }
    std::cout << std::endl;
  }
}

int main(int argc, char *argv[]) {
  std::ifstream maps("map_file");
  std::ifstream inputFile("input_file");
  getTransformed(maps, inputFile);
  return 0;
}
