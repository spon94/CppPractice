#include <string>
using namespace std;

class Screen {
public:
  using pos = string::size_type;
  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(ht * wd, c) {}
  Screen &move(pos r, pos c);

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  string contents;
};

inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}
