std::vector<int> data{1,2,3,4,5,6,7,8,9};
std::shift_left(data.begin(), data.end(), 3);
// data == {4, 5, 6, 7, 8, 9, 7, 8, 9}

data = {1,2,3,4,5,6,7,8,9};
std::shift_right(data.begin(), data.end(), 3);
// data == {1, 2, 3, 1, 2, 3, 4, 5, 6}