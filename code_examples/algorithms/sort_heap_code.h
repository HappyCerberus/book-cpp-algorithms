std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

std::make_heap(data.begin(), data.end());
// data == {9, 8, 7, 4, 5, 6, 3, 2, 1} - different ordering possible

std::sort_heap(data.begin(), data.end());
// data == {1, 2, 3, 4, 5, 6, 7, 8, 9}