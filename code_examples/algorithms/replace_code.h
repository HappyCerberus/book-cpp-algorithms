std::vector<int> data{1, 2, 3, 4, 5, 6, 7};

std::ranges::replace(data, 4, 0);
// data == {1, 2, 3, 0, 5, 6, 7}

auto is_odd = [](int v) { return v % 2 != 0; };
std::ranges::replace_if(data, is_odd, -1);
// data == {-1, 2, -1, 0, -1, 6, -1}
