struct Record {
	std::string label;
	int rank;
};

std::vector<Record> data {{"q", 1}, {"f", 1}, {"c", 2},
                          {"a", 1}, {"d", 3}};

std::ranges::stable_sort(data, {}, &Record::label);
std::ranges::stable_sort(data, {}, &Record::rank);
// Guarantted order: a-1, f-1, q-1, c-2, d-3