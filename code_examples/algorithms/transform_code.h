std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8};

std::transform(data.begin(), data.end(),
	data.begin(),
	[](int v) { return v*2; });
// data == {2, 4, 6, 8, 10, 12, 14, 16}

std::vector<int> add{8, 7, 6, 5, 4, 3, 2, 1};

std::transform(data.begin(), data.end(),
	add.begin(),
	data.begin(),
	[](int left, int right) { return left+right; });
// data == {10, 11, 12, 13, 14, 15, 16, 17}
