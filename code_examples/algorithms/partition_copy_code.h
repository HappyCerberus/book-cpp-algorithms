std::vector<int> data{2, 4, 6, 1, 3, 5};
auto is_even = [](int v) { return v % 2 == 0; };

std::vector<int> even, odd;
std::partition_copy(data.begin(), data.end(),
	std::back_inserter(even),
	std::back_inserter(odd),
	is_even);

// even == {2, 4, 6}
// odd == {1, 3, 5}