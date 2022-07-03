std::vector<int> data;

std::ranges::transform(std::views::iota(1, 10), std::views::iota(5), 
	std::back_inserter(data), std::plus<>{});
// data == { 6, 8, 10, 12, 14, 16, 18, 20, 22 }
