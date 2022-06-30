std::vector<int> data{1, 1, 2, 2, 3, 4, 5, 6, 6, 6};
std::vector<int> out;

std::ranges::unique_copy(data, std::back_inserter(out));
// out == {1, 2, 3, 4, 5, 6}
