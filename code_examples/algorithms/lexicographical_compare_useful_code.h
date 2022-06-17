// for demonstration only, prefer std::array
int x[] = {1, 2, 3};
int y[] = {1, 4};

bool cmp1 = std::lexicographical_compare(&x[0], &x[3], &y[0], &y[2]);
// cmp1 == true

std::vector<std::string> names1{"Zod", "Celeste"};
std::vector<std::string> names2{"Adam", "Maria"};

bool cmp2 = std::ranges::lexicographical_compare(names1, names2, 
	[](const std::string& left, const std::string& right) {
		return left.length() < right.length();
	});
// different than
bool cmp3 = names1 < names2; // Zod > Adam
// cmp2 == true, cmp3 == false
