std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8};

std::vector<int> out;
std::ranges::copy(std::views::counted(std::next(data.begin()), 3),
	std::back_inserter(out));
// out == {2, 3, 4}
