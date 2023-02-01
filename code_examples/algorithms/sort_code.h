std::vector<int> data1 = {9, 1, 8, 2, 7, 3, 6, 4, 5};
std::sort(data1.begin(), data1.end());
// data1 == {1, 2, 3, 4, 5, 6, 7, 8, 9}

std::list<int> data2 = {9, 1, 8, 2, 7, 3, 6, 4, 5};
// std::sort(data.begin(), data.end()); // doesn't compile
data2.sort();
// data2 == {1, 2, 3, 4, 5, 6, 7, 8, 9}