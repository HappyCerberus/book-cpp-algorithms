std::string haystack = "abbabba";
std::string needle = "bba";

auto it1 = std::search(haystack.begin(), haystack.end(), 
	needle.begin(), needle.end());
// it1..end == "bbabba"

auto it2 = std::find_end(haystack.begin(), haystack.end(), 
	needle.begin(), needle.end());
// it2..end == "bba"