std::vector<int> data{2, 4, 6, 7, 9, 11};

auto is_even = [](int v) { return v % 2 == 0; };
bool test1 = std::ranges::is_partitioned(data, is_even);
// test1 == true

bool test2 = true;
for (int i = 0; i < 16; ++i) {
	test2 = test2 && std::is_partitioned(data.begin(), data.end(),
		[&i](int v) { return v < i; });
}
// test2 == true