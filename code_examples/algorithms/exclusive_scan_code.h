std::vector<int> src{1, 2, 3, 4, 5, 6};
std::vector<int> out;

std::exclusive_scan(src.begin(), src.end(),
	std::back_inserter(out), 0);
// out == {0, 1, 3, 6, 10, 15}

std::exclusive_scan(src.begin(), src.end(),
	out.begin(), 1, std::multiplies<>{});
// out == {1, 1, 2, 6, 24, 120}