std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
for (auto v : data | std::views::reverse | 
		std::views::take(3) | std::views::reverse) {
	// iterate over 7, 8, 9 (in order)
}
