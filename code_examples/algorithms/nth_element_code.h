std::vector<int> data{9, 1, 8, 2, 7, 3, 6, 4, 5};
std::nth_element(data.begin(), data.begin()+4, data.end());
// data[4] == 5
// data[0..3] == {1, 2, 3, 4} - in undeterminate order

std::nth_element(data.begin(), data.begin()+7, data.end(), std::greater<>());
// data[7] == 2
// data[0..6] == {3, 4, 5, 6, 7, 8, 9} - in undeterminate order
