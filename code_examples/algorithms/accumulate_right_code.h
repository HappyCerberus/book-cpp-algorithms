std::vector<int> data{1, 2, 3, 4, 5};

auto left_fold = std::accumulate(data.begin(), data.end(), 0,
	[](int acc, int el) {
		return acc / 2 + el;
	});
// left_fold == 8

auto right_fold = std::accumulate(data.rbegin(), data.rend(), 0,
	[](int acc, int el) {
		return acc / 2 + el;
	});
// right_fold == 3