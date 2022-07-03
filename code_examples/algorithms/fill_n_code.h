std::vector<int> data;
// data == {}

std::fill_n(std::back_inserter(data), 5, 11);
// data == {11, 11, 11, 11, 11}

std::ranges::generate_n(std::back_inserter(data), 5,
	[]() { return 7; });
// data == {11, 11, 11, 11, 11, 7, 7, 7, 7, 7}
