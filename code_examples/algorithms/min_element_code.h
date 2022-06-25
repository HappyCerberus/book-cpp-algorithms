std::vector<int> data = { 5, 3, -2 , 0};
auto i = std::min_element(data.begin(), data.end());
// *i == -2 (i.e. data[2])
auto j = std::max_element(data.begin(), data.end());
// *j == 5 (i.e. data[0])

auto k = std::minmax_element(data.begin(), data.end());
// *k.first == -2, *k.second == 5
