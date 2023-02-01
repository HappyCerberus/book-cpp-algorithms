std::vector<int> first = { 1, 2, 3, 4, 5 };
std::vector<int> second = { 1, 2, 2, 4, 5 };

auto it_pair = std::mismatch(first.begin(), first.end(), 
                             second.begin());
// *it_pair.first == 3, *it_pair.second == 2