std::string version = "1.23.13.42";
std::vector<int> parsed;

std::ranges::copy(version | 
	std::views::split('.') | 
	std::views::transform([](auto v) { 
		int result = 0;
		// from_chars requires contiguous range
		std::from_chars(v.data(), v.data()+v.size(), result);
		return result;
	}),
	std::back_inserter(parsed));
// parsed == {1, 23, 13, 42}
