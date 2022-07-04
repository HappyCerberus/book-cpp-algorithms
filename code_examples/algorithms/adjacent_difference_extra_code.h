std::vector<int> data(10, 1);
// data == {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

std::adjacent_difference(data.begin(), std::prev(data.end()), 
	std::next(data.begin()), std::plus<int>());
// Fibonacci sequence:
// data == {1, 1, 2, 3, 5, 8, 13, 21, 34, 55}
