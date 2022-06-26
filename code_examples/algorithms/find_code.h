std::string data = "John;Doe;April;1;1900;";
auto it = data.begin(), token = data.begin();
std::vector<std::string> out;

while ((token = find(it, data.end(), ';')) != data.end()) {
	out.push_back("");
	std::copy(it, token, std::back_inserter(out.back()));
	it = std::next(token);
}
// out == { "John", "Doe", "April", "1", "1900" }

