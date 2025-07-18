#include <cstddef>
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class StrBlobPtr;
class StrBlob {
public:
  friend class StrBlobPtr;
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

class StrBlobPtr {
public:
  StrBlobPtr() : curr(0) {}
  StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
  std::string &deref() const;
  StrBlobPtr &incr();

private:
  std::weak_ptr<std::vector<std::string>> wptr;
  std::size_t curr;
  std::shared_ptr<std::vector<std::string>> check(std::size_t,
                                                  const std::string &) const;
};

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const {
  auto ret = wptr.lock();
  if (!ret) {
    throw std::runtime_error("unbound StrBlobPtr");
  }

  if (i > ret->size()) {
    throw std::out_of_range(msg);
  }
  return ret;
}

std::string &StrBlobPtr::deref() const {
  auto p = check(curr, "dereference past end");
  return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
  check(curr, "incresment past end of StrBlobPtr");
  ++curr;
  return *this;
}
