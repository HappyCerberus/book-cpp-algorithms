std::vector<int> data = { 1, 0, 5, 8, 3, 3, 2 };

auto it1 = std::search_n(data.begin(), data.end(), 2, 3);
// *it1 == 3, i.e. {3, 3}

auto it2 = std::search_n(data.begin(), data.end(), 3, 3, 
	[](int l, int r) { return l % 5 == r % 5; });
// *it2 == 8, i.e. {8, 3, 3}

auto it3 = std::search_n(data.begin(), data.end(), 2, 0);
// it3 == data.end(), i.e. not found
