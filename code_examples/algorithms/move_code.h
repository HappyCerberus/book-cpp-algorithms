std::vector<std::string> data{ "a", "b", "c", "d", "e", "f"};

std::move(data.begin(), data.begin()+3, data.begin()+3);
// data = { ?, ?, ?, "a", "b", "c" }
// Note: most implementations will set moved-out-of std::string to empty.
