std::string_view data = "Car Dog Window";
std::vector<std::string> words;
std::ranges::for_each(data | std::views::lazy_split(' '),
	[&words](auto const& view) {
		// string constructor needs common range.
		auto common = view | std::views::common;
		words.emplace_back(common.begin(), common.end());
	});
// words == {"Car", "Dog", "Window"}

auto joined = data | std::views::lazy_split(' ') | std::views::join | std::views::common;
std::string out(joined.begin(), joined.end());
// out == "CarDogWindow"
