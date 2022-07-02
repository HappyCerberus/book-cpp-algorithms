std::vector<int> data{6, 4, 3, 7, 2, 1};
auto sum_of_diffs = std::inner_product(
	data.begin(), std::prev(data.end()),
	std::next(data.begin()), 0,
	std::plus<>{},
	[](int left, int right) { return std::abs(left-right); }
);
// sum_of_diffs == 13
