#include <iostream>
#include <fstream>
#include <string>

void readFromFile(std::ifstream& fs) {
  std::string str;
  std::ofstream outFile;
  outFile.open("outfile", std::ofstream::app);
  
  std::cout << "####### file output #######\n";
  while (getline(fs, str))
  {
    outFile << str << std::endl;
  }
}

int main(int argc, char const *argv[])
{
  std::ifstream file("data.txt");
  readFromFile(file);
  return 0;
}