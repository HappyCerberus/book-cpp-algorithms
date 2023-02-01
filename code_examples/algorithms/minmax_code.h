struct X {
	int rank;
	auto operator <=> (const X&) const = default;
};

X a{1}, b{2};
auto [first, second] = std::minmax(b, a);
// first.rank == 1, second.rank == 2

// Operating on prvalues requires capture by value
std::pair<int,int> result = std::minmax(5, 10);
// result.first = 5, result.second = 10