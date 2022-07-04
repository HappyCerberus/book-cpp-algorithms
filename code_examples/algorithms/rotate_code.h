std::vector<int> data{1, 2, 3, 4, 5, 6, 7};
std::rotate(data.begin(), data.begin()+3, data.end());
// data == {4, 5, 6, 7, 1, 2, 3}
