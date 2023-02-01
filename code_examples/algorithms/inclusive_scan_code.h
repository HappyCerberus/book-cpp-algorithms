std::vector<int> src{1, 2, 3, 4, 5, 6};
std::vector<int> out;

std::inclusive_scan(src.begin(), src.end(),
	std::back_inserter(out));
// out == {1, 3, 6, 10, 15, 21}

std::inclusive_scan(src.begin(), src.end(),
	out.begin(), std::multiplies<>{}, 1);
// out == {1, 2, 6, 24, 120, 720}