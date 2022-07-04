std::vector<int> data{1, 2, 3, 4, 5, 6, 7};

std::reverse(data.begin(), data.end());
// data == {7, 6, 5, 4, 3, 2, 1}

for (auto it = data.rbegin(); it != data.rend(); ++it) {
	// iterate over: 1, 2, 3, 4, 5, 6, 7
}
