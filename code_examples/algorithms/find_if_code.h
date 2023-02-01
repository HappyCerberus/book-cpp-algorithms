std::string data = "   hello world!  ";

auto begin = std::find_if_not(data.begin(), data.end(), 
	[](char c) { return isspace(c); });
if (begin == data.end()) // only spaces
    return 0;

std::string out;
std::copy(begin,
	std::find_if_not(data.rbegin(), data.rend(),
		[](char c) { return isspace(c); }
	).base(),
	std::back_inserter(out));
// out == "hello world!"