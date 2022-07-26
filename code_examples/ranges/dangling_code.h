const char* c_str = "1234567890";

// find on a temporary string_view
auto sep1 = std::ranges::find(std::string_view(c_str), '0');
// OK, string_view is a borrowed range, *sep1 == '0', 

int bad = 1234567890;

// find on a temporary string
auto sep2 = std::ranges::find(std::to_string(bad), '0');
// decltype(sep2) == std::ranges::dangling, *sep2 would not compile
