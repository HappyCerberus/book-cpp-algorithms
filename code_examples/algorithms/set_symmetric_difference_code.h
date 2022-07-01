std::vector<int> data1{1, 3, 5, 7, 9};
std::vector<int> data2{3, 4, 5, 6, 7};

std::vector<int> symmetric_difference;
std::ranges::set_symmetric_difference(data1, data2,
	std::back_inserter(symmetric_difference));
// symmetric_difference == {1, 4, 6, 9}
