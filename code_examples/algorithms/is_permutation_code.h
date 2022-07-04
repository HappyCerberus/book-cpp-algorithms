std::vector<int> data = { 8, 1, 7, 3, 4, 6, 2, 5};
for (size_t i = 0; i < data.size()-1; ++i)
	for (size_t j = i+1; j < data.size(); ++j)
		if (data[i] > data[j])
			std::swap(data[i], data[j]);

bool is_sorted = std::ranges::is_sorted(data);
// is_sorted == true

bool is_permutation = std::ranges::is_permutation(data, 
	std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8});
// is_permutation == true
