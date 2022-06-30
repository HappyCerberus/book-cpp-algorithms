std::vector<int> range{1, 3, 5, 2, 4, 6};
std::inplace_merge(range.begin(), range.begin()+3, range.end());
// range == { 1, 2, 3, 4, 5, 6 }
