std::vector<int> data1{1, 2, 3, 4, 5, 6};
std::vector<int> data2{3, 4, 5};

std::vector<int> difference;
std::ranges::set_difference(data1, data2,
	std::back_inserter(difference));
// difference == {1, 2, 6}
