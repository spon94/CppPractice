#include <iostream>
#include <string>

std::string &stringReplace(std::string &str, std::string oldVal,
                           std::string newVal) {
  // 循环遍历目标字符串，查找 oldVal 子串
  for (auto index = 0; index < str.size();) {
    bool found = true;
    for (auto subIndex = 0; subIndex < oldVal.size(); ++subIndex) {
      if (index + subIndex >= str.size() ||
          str[index + subIndex] != oldVal[subIndex]) {
        found = false;
        break;
      }
    }
    if (found) {
      str.erase(index, oldVal.size());
      str.insert(index, newVal);
      index += newVal.size();
    } else {
      ++index;
    }
  }
  std::cout << str << std::endl;
  return str;
}

int main(int argc, char *argv[]) {
  std::string str = "thth";
  std::string oldVal = "th";
  std::string newVal = "though";
  stringReplace(str, oldVal, newVal);
  std::cout << str;
  return 0;
}
