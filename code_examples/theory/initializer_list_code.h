struct X {
	static int copy_cnt;
	X(int v) : value(v) {}
	X(const X& other) : value(other.value) {
		++copy_cnt;       
	}
	int value;
	friend auto operator <=>(const X&, const X&) = default;
};

int X::copy_cnt = 0;

void example() {
	X a{1}, b{2}, c{3}, d{4}, e{5};
	auto max = std::max({a, b, c, d, e});
	// max.value == 5
	// X::copy_cnt == 6
}
