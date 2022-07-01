struct Labeled {
	std::string label;
	int value;
};

auto cmp = [](const auto& l, const auto& r) {
	return l.value < r.value;
};

std::vector<Labeled> equal1{{"first_a", 1}, {"first_b", 1}, {"first_c", 1}, {"first_d", 1}};
std::vector<Labeled> equal2{{"second_a", 1}, {"second_b", 1}};

std::vector<Labeled> equal_difference;
std::ranges::set_difference(equal1, equal2,
	std::back_inserter(equal_difference), cmp);
// equal_difference == { {"first_c", 1}, {"first_d", 1} }
