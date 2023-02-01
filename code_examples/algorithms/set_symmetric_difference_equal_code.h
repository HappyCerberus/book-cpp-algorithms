struct Labeled {
	std::string label;
	int value;
};

auto cmp = [](const auto& l, const auto& r) {
	return l.value < r.value;
};

std::vector<Labeled> equal1{{"first_a", 1}, {"first_b", 2},
							{"first_c", 2}};
std::vector<Labeled> equal2{{"second_a", 1}, {"second_b", 1},
							{"second_c", 2}};

std::vector<Labeled> equal_symmetric_difference;
std::ranges::set_symmetric_difference(equal1, equal2,
	std::back_inserter(equal_symmetric_difference), cmp);
// equal_symmetric_difference == { {"second_b", 1}, {"first_c", 2} }