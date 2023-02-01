std::string haystack = "abbabba";
std::string needle = "bba";

auto it1 = std::search(haystack.begin(), haystack.end(), 
	std::default_searcher(needle.begin(), needle.end()));

auto it2 = std::search(haystack.begin(), haystack.end(), 
	std::boyer_moore_searcher(needle.begin(), needle.end()));

auto it3 = std::search(haystack.begin(), haystack.end(), 
	std::boyer_moore_horspool_searcher(needle.begin(), needle.end()));
// it1 == it2 == it3