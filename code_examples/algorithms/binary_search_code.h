std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};

bool exists = std::ranges::binary_search(data, 5);
// exists == true
auto [lb, ub] = std::ranges::equal_range(data, 5);
// lb != ub, i.e. the value is in the range
