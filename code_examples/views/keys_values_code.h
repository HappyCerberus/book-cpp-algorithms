std::unordered_map<int,double> map{
	{0, 1.0}, {1, 1.5}, {2, 2.0}, {3, 2.5}
};

std::vector<int> keys;
std::ranges::copy(std::views::keys(map), std::back_inserter(keys));
// keys == {0, 1, 2, 3} in unspecified order (std::unordered_map)

std::vector<double> values;
std::ranges::copy(std::views::values(map),
		std::back_inserter(values));
// values == {1.0, 1.5, 2.0, 2.5} 
// in unspecified order matching order of keys
