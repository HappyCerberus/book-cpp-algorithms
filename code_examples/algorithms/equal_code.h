std::vector<int> first = { 1, 2, 3, 4, 5 };
std::vector<int> second = { -1, -2, -3, -4, -5 };

bool test1 = std::equal(first.begin(), first.end(), second.begin());
// test1 == false

bool test2 = std::equal(first.begin(), first.end(), second.begin(), 
	[](int l, int r) { return std::abs(l) == std::abs(r); });
// test2 == true
