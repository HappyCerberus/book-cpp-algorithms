std::vector<int> data{1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 9};

auto [lb, ub] = std::equal_range(data.begin(), data.end(), 6);
// std::distance(data.begin(), lb) == 5, *lb == 6
// std::distance(data.begin(), ub) == 8, *ub == 7
