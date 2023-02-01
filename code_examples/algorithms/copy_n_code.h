std::list<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> out;

std::copy_n(data.begin(), 5, std::back_inserter(out));
// out == { 1, 2, 3, 4, 5 }