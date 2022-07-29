std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8};

std::vector<int> even;
std::ranges::copy(data | 
	std::views::filter([](int v) { return v % 2 == 0; }),
	std::back_inserter(even));
// even == {2, 4, 6, 8}
