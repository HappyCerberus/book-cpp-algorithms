std::vector<int> data{-2, 0, 2, 4, 6, 8};

bool all_even = std::ranges::all_of(data,
	[](int v) { return v % 2 == 0; });
// all_even == true

bool one_negative = std::ranges::any_of(data,
	[](int v) { return std::signbit(v); });
// one_negative == true

bool none_odd = std::ranges::none_of(data,
	[](int v) { return v % 2 != 0; });
// none_odd == true
