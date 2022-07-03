std::vector<int> data{1, 2, 3, 4, 5};
auto sum_of_squares = std::transform_reduce(data.begin(), data.end(),
	0, std::plus<>{}, [](int v) { return v*v; });
// sum_of_squares == 55

std::vector<int> coef{1, -1, 1, -1, 1};
auto result = std::transform_reduce(data.begin(), data.end(), 
	coef.begin(), 0);
// result == 1*1 + 2*(-1) + 3*1 + 4*(-1) + 5*1 == 3
