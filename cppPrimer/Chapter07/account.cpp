class Account {
public:
  static double rate() { return interestRate; }
  static void rate(double);

private:
  static constexpr int period = 20;
  static double interestRate;
  double daily_tbl[period];
};
