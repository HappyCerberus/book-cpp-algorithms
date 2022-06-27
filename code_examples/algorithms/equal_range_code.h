std::vector<int> first = { 1, 2, 3, 4, 5 };
std::vector<int> second = { 1, 2, 3, 4, 5, 6 };

bool test1 = std::equal(first.begin(), first.end(), second.begin());
// test1 == true, cannot detect mismatch in number of elements

bool test2 = std::equal(first.begin(), first.end(), 
	second.begin(), second.end());
// test2 == false, different number of elements -> not equal.

auto pair_it = std::mismatch(first.begin(), first.end(),
	second.begin(), second.end());
// pair_it.first == first.end()
// *pair_it.second == 6


