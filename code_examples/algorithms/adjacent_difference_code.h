std::vector<int> data{2, 3, 5, 7, 11, 13};
std::adjacent_difference(data.begin(), data.end(), data.begin());
// data == {2, 1, 2, 2, 4, 2}
