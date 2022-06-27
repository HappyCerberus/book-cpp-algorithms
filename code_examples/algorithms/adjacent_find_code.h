std::vector<int> data = { 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9 };
auto it1 = std::adjacent_find(data.begin(), data.end());
// *it1 == 4, i.e. {4, 4}

auto it2 = std::adjacent_find(data.begin(), data.end(),
	[](int l, int r) { return l + r > 10; });
// *it2 == 5, i.e. {5, 6}
