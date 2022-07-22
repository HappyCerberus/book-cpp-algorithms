std::vector<int> dt = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
std::ranges::shuffle(dt, std::mt19937(std::random_device()()));

auto pos = std::ranges::find(
	dt.begin(), 
	std::unreachable_sentinel,
	7); 
