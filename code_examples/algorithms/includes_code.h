std::vector<char> letters('z'-'a'+1,'\0');
std::iota(letters.begin(), letters.end(), 'a');
std::string input = "the quick brown fox jumps over the lazy dog";
std::ranges::sort(input);

bool test = std::ranges::includes(input, letters);
// test == true