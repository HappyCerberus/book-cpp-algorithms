std::vector<std::string> data{ "a", "b", "c", "d", "e", "f"};
std::vector<std::string> out(9, "");
// out == {"", "", "", "", "", "", "", "", ""}

std::copy_backward(data.begin(), data.end(), out.end());
// out == {"", "", "", "a", "b", "c", "d", "e", "f"}

std::copy_backward(data.begin(), std::prev(data.end()), data.end());
// data == { "a", "a", "b", "c", "d", "e" }
