std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int sum = 0;
std::for_each(data.begin(), data.end(), [&sum](int el) {
	sum += el;
	});
// sum == 45