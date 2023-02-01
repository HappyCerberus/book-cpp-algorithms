std::vector<int> data{1, 2, 3, 4, 5};
auto sum = std::accumulate(data.begin(), data.end(), 0);
// sum == 15

auto product = std::accumulate(data.begin(), data.end(), 1,
                               std::multiplies<>{});
// product == 120