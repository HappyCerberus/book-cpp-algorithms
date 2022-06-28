std::vector<int> data = { 1, 1, 2, 2 };
std::make_heap(data.begin(), data.end());
// data == { 2, 2, 1, 1} - different ordering possible

// Push 9 to the heap
data.push_back(9);
// data == { [heap_part], 9 }
std::push_heap(data.begin(), data.end());
// data == { 9, 2, 1, 1, 2 } - different ordering possible

// Push 7 to the heap
data.push_back(7);
// data == { [heap_part], 7 }
std::push_heap(data.begin(), data.end());
// data == { 9, 2, 7, 1, 2, 1 } - different ordering possible

std::pop_heap(data.begin(), data.end());
// data == { [heap_part], 9 }
std::pop_heap(data.begin(), std::prev(data.end()));
// data == { [heap_part], 7, 9 }
