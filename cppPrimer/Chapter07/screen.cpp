#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Window_mgr;
class Screen {
public:
  using pos = string::size_type;
  friend class Window_mgr;
  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(ht * wd, c) {}
  Screen &move(pos r, pos c);
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(ostream &os) const {
    do_display(os);
    return *this;
  }
  pos size() const;

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  string contents;
  void do_display(ostream &os) const { os << contents; }
};

class Window_mgr {
public:
  using ScreenIndex = vector<Screen>::size_type;
  void clear(ScreenIndex);

private:
  vector<Screen> screens{Screen(24, 80, ' ')};
};

inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline Screen &Screen::set(char ch) {
  contents[cursor] = ch;
  return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch) {
  contents[r * width + c] = ch;
  return *this;
}

Screen::pos Screen::size() const { return height * width; }

void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}

int main(int argc, char *argv[]) {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return 0;
}
