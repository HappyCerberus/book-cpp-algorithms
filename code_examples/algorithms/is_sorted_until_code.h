std::vector<int> data {1, 5, 9, 2, 4, 6};
auto it = std::is_sorted_until(data.begin(), data.end());
// *it == 2