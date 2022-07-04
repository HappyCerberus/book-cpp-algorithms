std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> out;

std::sample(data.begin(), data.end(), std::back_inserter(out),
	5, std::mt19937{std::random_device{}()});
// e.g. out == {2, 3, 4, 5, 9}
// guaranteed ascending, because source range is ascending
