std::vector<int> data{9, 1, 8, 2, 7, 3, 6, 4, 5};
std::nth_element(data.begin(), data.begin() + 4, data.end());
// data[4] == 5, data[0..3] < data[4]

std::nth_element(data.begin(), data.begin() + 7, data.end(),
    std::greater<>());
// data[7] == 2, data[0..6] > data[7]