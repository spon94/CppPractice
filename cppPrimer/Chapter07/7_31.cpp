class X;
class Y;

class X {
private:
  Y *pointer_y;
};

class Y {
private:
  X x;
};
