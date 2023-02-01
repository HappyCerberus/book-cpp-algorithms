// input == "0 1 2 3 4 5 6 7 8 9"
std::vector<int> top(3);

auto input = std::istream_iterator<int>(std::cin);
auto cnt = std::counted_iterator(input, 10);

std::ranges::partial_sort_copy(cnt, std::default_sentinel, 
	top.begin(), top.end(), 
	std::greater<>{});
// top == { 9, 8, 7 }