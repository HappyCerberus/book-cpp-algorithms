std::vector<int> data{ 1, 2, 3, 4, 5, 6, 7, 8, 9};
std::swap_ranges(data.begin(), data.begin()+3, data.rbegin());
// data = { 9, 8, 7, 4, 5, 6, 3, 2, 1 }
