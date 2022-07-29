std::vector<int> data{1, 2, 3, 4};

std::vector<int> out;
std::ranges::copy(std::views::all(data), std::back_inserter(out));
// out == {1, 2, 3, 4}
