std::vector<int> data(5, 0);
// data == {0, 0, 0, 0, 0}

std::fill(data.begin(), data.end(), 11);
// data == {11, 11, 11, 11, 11}

std::ranges::generate(data, []() { return 5; });
// data == {5, 5, 5, 5, 5}

// iota-like
std::ranges::generate(data, [i = 0]() mutable { return i++; });
// data == {0, 1, 2, 3, 4}
