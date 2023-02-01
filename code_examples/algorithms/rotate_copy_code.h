std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> out;

std::ranges::rotate_copy(data, data.begin() + 4, 
                         std::back_inserter(out));
// out == { 5, 6, 7, 8, 9, 1, 2, 3, 4 }