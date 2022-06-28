std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};

bool test1 = std::is_heap(data.begin(), data.end());
// test1 == false
auto it1 = std::is_heap_until(data.begin(), data.end());
// *it1 == 2

std::make_heap(data.begin(), data.end());

bool test2 = std::is_heap(data.begin(), data.end());
// test2 == true
auto it2 = std::is_heap_until(data.begin(), data.end());
// it2 == data.end()
