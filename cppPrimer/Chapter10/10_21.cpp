
int main(int argc, char *argv[]) {
  int loop = 10;
  auto f = [loop]() mutable {
    if (loop) {
      while (loop) {
        --loop;
      }
      return true;
    } else {
      return false;
    }
  };
  return 0;
}
