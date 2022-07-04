std::vector<std::string> data{ "a", "b", "c", "d", "e", "f"};

std::copy(data.begin(), data.begin()+3, data.begin()+3);
// data = { "a", "b", "c", "a", "b", "c" }

// Overlapping case:
std::copy(std::next(data.begin()), data.end(), data.begin());
// data = { "b", "c", "a", "b", "c", "c" }
