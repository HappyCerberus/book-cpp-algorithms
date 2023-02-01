struct Labeled {
	std::string label;
	int value;
};

auto cmp = [](const auto& l, const auto& r) {
	return l.value < r.value;
};

std::vector<Labeled> equal1{{"first_a", 1}, {"first_b", 1},
							{"first_c", 2}};
std::vector<Labeled> equal2{{"second_a", 1}, {"second_b", 2},
							{"second_c", 2}};

std::vector<Labeled> equal_union;
std::ranges::set_union(equal1, equal2,
	std::back_inserter(equal_union), cmp);
// equal_union == { {"first_a", 1}, {"first_b", 1}, 
//                  {"first_c", 2}, {"second_c", 2} }
