std::vector<int> data(6, 1);
// data == {1, 1, 1, 1, 1, 1}

std::partial_sum(data.begin(), data.end(), data.begin());
// data == {1, 2, 3, 4, 5, 6}

std::vector<int> out;
std::partial_sum(data.begin(), data.end(), 
	std::back_inserter(out), std::multiplies<>{});
// out == {1, 2, 6, 24, 120, 720}
