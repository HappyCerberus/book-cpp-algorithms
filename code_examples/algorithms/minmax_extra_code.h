auto min = std::min({5, 3, -2, 0});
// min == -2

auto minmax = std::minmax({5, 3, -2, 0});
// minmax.first == -2, minmax.second == 5

std::list<int> data{5, 3, -2, 0};
auto max = std::ranges::max(data);
// max == 5