std::vector<int> data{-10, 3, -2, 5, 6};

std::vector<int> out1;
std::inclusive_scan(data.begin(), data.end(),
	std::back_inserter(out1), std::plus<>{});
// out1 == {-10, -7, -9, -4, 2}

std::vector<int> out2;
std::transform_inclusive_scan(data.begin(), data.end(), 
	std::back_inserter(out2), std::plus<>{},
	[](int v) { return std::abs(v); });
// out2 == {10, 13, 15, 20, 26}
