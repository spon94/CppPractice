#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void readFromFile(std::ifstream& fs) {
  std::vector<std::string> fileString;
  std::string str;
  while(getline(fs, str)){
    std::cout << str << std::endl;
    fileString.push_back(str);
  }
  std::cout << "####### vector output #######\n";
  for(auto str: fileString){
    std::cout << str << std::endl;
  }
}

int main(int argc, char const *argv[])
{
  std::ifstream file("data.txt");
  readFromFile(file);
  return 0;
}