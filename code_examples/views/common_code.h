std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8};

std::vector<int> out;
auto view = data | 
	std::views::filter([](int v) { return v % 2 == 0; }) | 
	std::views::common;

std::copy(view.begin(), view.end(), std::back_inserter(out));
// out == {2, 4, 6, 8}
