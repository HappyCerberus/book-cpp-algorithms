std::vector<int> data = { 1, 2, 3, 2, 1, 2, 3, 2, 1 };

auto one_cnt = std::count(data.begin(), data.end(), 1);
// one_cnt == 3

auto even_cnt = std::count_if(data.begin(), data.end(), 
	[](int v) { return v % 2 == 0; });
// even_cnt == 4
