std::vector<int> data{1, 2, 3, 4, 5};

auto sum = std::reduce(data.begin(), data.end(), 0);
// sum == 15

sum = std::reduce(std::execution::par_unseq,
	data.begin(), data.end(), 0);
// sum == 15

auto product = std::reduce(data.begin(), data.end(), 1,
	std::multiplies<>{});
// product == 120

product = std::reduce(std::execution::par_unseq,
	data.begin(), data.end(), 1, std::multiplies<>{});
// product == 120