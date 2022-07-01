std::vector<int> data1{1, 2, 3, 4, 5};
std::vector<int> data2{2, 4, 6};

std::vector<int> intersection;
std::ranges::set_intersection(data1, data2,
	std::back_inserter(intersection));
// intersection == {2, 4}
