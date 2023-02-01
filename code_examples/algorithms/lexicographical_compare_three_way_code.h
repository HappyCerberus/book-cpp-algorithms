std::vector<int> data1 = { 1, 1, 1 };
std::vector<int> data2 = { 1, 2, 3 };

auto cmp = std::lexicographical_compare_three_way(
    data1.begin(), data1.end(), 
    data2.begin(), data2.end());
// cmp == std::strong_ordering::less