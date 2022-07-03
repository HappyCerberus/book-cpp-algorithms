std::vector<int> data(9, 0);
// data == {0, 0, 0, 0, 0, 0, 0, 0, 0}

std::iota(data.begin(), data.end(), -4); 
// data == {-4, -3, -2, -1, 0, 1, 2, 3, 4}
