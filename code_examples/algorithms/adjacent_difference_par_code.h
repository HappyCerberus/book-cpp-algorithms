std::vector<int> data{2, 3, 5, 7, 11, 13};
std::vector<int> out(data.size());

std::adjacent_difference(std::execution::par_unseq,
    data.begin(), data.end(), out.begin());
// out == {2, 1, 2, 2, 4, 2}