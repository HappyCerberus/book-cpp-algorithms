std::vector<int> data1 = {1, 2, 3, 4, 5};
bool test1 = std::is_sorted(data1.begin(), data1.end());
// test1 == true

std::vector<int> data2 = {5, 4, 3, 2, 1};
bool test2 = std::ranges::is_sorted(data2);
// test2 == false
bool test3 = std::ranges::is_sorted(data2, std::greater<>{});
// test3 == true
