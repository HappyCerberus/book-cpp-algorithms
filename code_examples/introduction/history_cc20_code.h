int cnt = 0, sum = 0;
std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
std::ranges::for_each(data, [&](int el) {
	cnt++;
	sum += el;
});
// cnt == 9, sum == 45
