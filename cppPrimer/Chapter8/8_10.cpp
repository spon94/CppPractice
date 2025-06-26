#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

void getData(std::ifstream &fs)
{
  std::string str;
  std::vector<std::string> strList;
  std::string getStr;
  while (fs >> str)
  {
    std::istringstream iss(str);  // 每次循环创建新的istringstream对象，重置流的状态
    iss >> getStr;
    strList.push_back(getStr);
  }
  std::cout << "##### output #####\n";
  for (auto str : strList)
  {
    std::cout << str << std::endl;
  }
}

int main(int argc, char const *argv[])
{
  std::ifstream file("data.txt");
  getData(file);
  return 0;
}
