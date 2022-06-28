std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

std::make_heap(data.begin(), data.end());
// data == {9, 8, 7, 4, 5, 6, 3, 2, 1} - different ordering possible
// 9 >= 8, 9 >= 7
// 8 >= 4, 8 >= 5
// 7 >= 6, 7 >= 3
// ...

std::make_heap(data.begin(), data.end(), std::greater<>{});
// data == {1, 2, 3, 4, 5, 6, 7, 8, 9} - different ordering possible
// 1 <= 2, 1 <= 3
// 2 <= 4, 2 <= 5
// 3 <= 6, 3 <= 7
// ...
