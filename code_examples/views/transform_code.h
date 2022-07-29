std::vector<double> data{1.2, 2.3, 3.1, 4.5, 7.1, 8.2};

std::vector<int> out;
std::ranges::copy(data |
	std::views::transform([](auto v) -> int {
		return v*v;
	}), std::back_inserter(out));
// out == {1, 5, 9, 20, 50, 67}
