std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
auto it1 = data.begin();
auto it2 = it1 + 2;
std::for_each(it1, it2, [](int el) {
	std::cout << el << ", ";
});
// Prints: 1, 2,
    
auto it3 = data.begin() + 5;
auto it4 = data.end();
std::for_each(it3, it4, [](int el) {
	std::cout << el << ", ";
});
// Prints: 6, 7, 8, 9,
