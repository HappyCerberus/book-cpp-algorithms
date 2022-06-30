std::vector<int> data{1, 1, 2, 2, 3, 4, 5, 6, 6, 6};

auto it = std::unique(data.begin(), data.end());
// data == {1, 2, 3, 4, 5, 6, unspec, unspec, unspec, unspec}

data.resize(std::distance(data.begin(), it));
// data == {1, 2, 3, 4, 5, 6}
