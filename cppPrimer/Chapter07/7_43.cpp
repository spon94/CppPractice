class NoDefault {
public:
  NoDefault(int i) { num = i; }

private:
  int num;
};

class C {
private:
  NoDefault no;

public:
  C() : no(0) {}
};
