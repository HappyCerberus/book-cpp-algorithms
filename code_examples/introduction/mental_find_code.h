std::string str("Hello World!");
   
// Returns the iterator to the first occurence of ' '
auto it = std::find(str.begin(), str.end(), ' ');

// Range [begin, it) is the maximal prefix range 
// that doesn't contain ' '
for (auto v : std::string_view(str.begin(), it)) {
	// iterate over "Hello"
}
