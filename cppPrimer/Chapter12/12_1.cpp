#include <initializer_list>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class StrBlob {
public:
  using size_type = std::vector<std::string>::size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string> il);
  size_type size() const { return data->size(); };
  bool empty() const { return data->empty(); }
  void push_back(const std::string &t) { data->push_back(t); };
  void pop_back();
  std::string &front();
  std::string &back();

private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type sz, const std::string &msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il)
    : data(std::make_shared<std::vector<std::string>>(il)) {}

void StrBlob::check(size_type sz, const std::string &msg) const {
  if (sz > data->size()) {
    throw std::out_of_range(msg);
  }
}

std::string &StrBlob::front() {
  check(0, "front process on empty StrBlob");
  return data->front();
}

std::string &StrBlob::back() {
  check(0, "back process on empty StrBlob");
  return data->back();
}

void StrBlob::pop_back() {
  check(0, "pop_back process on empty StrBlob");
  data->pop_back();
}

int main(int argc, char *argv[]) {
  StrBlob b1;
  StrBlob b2 = {"a", "an", "the"};
  b1 = b2;
  b2.push_back("about");
  std::cout << b1.size() << " " << b2.size() << std::endl;
  return 0;
}
