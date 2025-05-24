#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Person {

  Person() = default;
  Person(const string &n, const string &loc) : name(n), location(loc) {}

  // Person input.
  friend istream &read(istream &is, Person &people) {
    is >> people.name >> people.location;
    return is;
  }
  // Person output.
  friend ostream &print(ostream &os, Person &people) {
    os << people.name << " " << people.location;
    return os;
  }

private:
  string name;
  string location;

public:
  string getName() const { return this->name; }
  string getLocation() const { return this->location; }
};
