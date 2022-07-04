std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> out;

std::ranges::reverse_copy(data, std::back_inserter(out));
// out == { 9, 8, 7, 6, 5, 4, 3, 2, 1 }
