struct Labeled {
	std::string label;
	int value;
};

auto cmp = [](const auto& l, const auto& r) {
	return l.value < r.value;
};

std::vector<Labeled> equal1{{"first_a", 1}, {"first_b", 2}};
std::vector<Labeled> equal2{{"second_a", 1}, {"second_b", 2}, {"second_c", 2}};

std::vector<Labeled> intersection;
std::ranges::set_intersection(equal1, equal2,
	std::back_inserter(intersection), cmp);
// intersection == { {"first_a", 1}, {"first_b", 2} }
