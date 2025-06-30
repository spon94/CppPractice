#include <vector>

std::vector<int> numList1;
std::vector<int> numList2(10);
std::vector<int> numList3(10, 1);
std::vector<int> numList4 = {2, 4, 2, 1, 4, 5, 6, 2, 1, 4};
std::vector<int> numList5(numList4);
std::vector<int> numList6(numList4.cbegin(), numList4.cbegin() + 5);
