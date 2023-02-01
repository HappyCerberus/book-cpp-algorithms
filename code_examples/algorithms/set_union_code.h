std::vector<int> data1{1, 3, 5};
std::vector<int> data2{2, 4, 6};

std::vector<int> set_union;
std::ranges::set_union(data1, data2,
	std::back_inserter(set_union));
// set_union == { 1, 2, 3, 4, 5, 6 }