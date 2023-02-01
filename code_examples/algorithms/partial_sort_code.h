std::vector<int> data{9, 8, 7, 6, 5, 4, 3, 2, 1};
std::partial_sort(data.begin(), data.begin()+3, data.end());
// data == {1, 2, 3, -unspecified order-}

std::ranges::partial_sort(data, data.begin()+3, std::greater<>());
// data == {9, 8, 7, -unspecified order-}