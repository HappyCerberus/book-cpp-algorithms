std::multiset<int> data{1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 9};

auto lb = data.lower_bound(6);
// std::distance(data.begin(), lb) == 5, *lb == 6

auto ub = data.upper_bound(6);
// std::distance(data.begin(), ub) == 8, *ub == 7
