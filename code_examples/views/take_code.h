std::vector<int> data{1, 3, 5, 7, 2, 4, 6, 8};

std::vector<int> out1;
std::ranges::copy(data | std::views::take(3), 
	std::back_inserter(out1));
// out1 == {1, 3, 5}

std::vector<int> out2;
std::ranges::copy(data | 
	std::views::take_while([](int v) { return v % 2 != 0; }), 
	std::back_inserter(out2));
// out2 == {1, 3, 5, 7}
