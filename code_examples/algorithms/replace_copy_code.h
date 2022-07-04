std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> out, odd;

std::ranges::replace_copy(data, std::back_inserter(out), 5, 10);
// out == { 1, 2, 3, 4, 10, 6, 7, 8, 9 }

auto is_even = [](int v) { return v % 2 == 0; };
std::ranges::replace_copy_if(data, std::back_inserter(odd), is_even, -1);
// odd == { 1, -1, 3, -1, 5, -1, 7, -1, 9 }
