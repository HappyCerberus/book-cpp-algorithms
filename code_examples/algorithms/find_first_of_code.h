std::vector<int> haystack = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
std::vector<int> needles = { 7, 5, 3 };

auto it = std::find_first_of(haystack.begin(), haystack.end(), 
	needles.begin(), needles.end());
// *it == 3, i.e. haystack[2]
