std::vector<int> data{ 1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> even, odd, no_five;

auto is_even = [](int v) { return v % 2 == 0; };

std::ranges::copy_if(data, std::back_inserter(even), is_even);
// even == { 2, 4, 6, 8 }

std::ranges::remove_copy_if(data, std::back_inserter(odd), is_even);
// odd == { 1, 3, 5, 7, 9 }

std::ranges::remove_copy(data, std::back_inserter(no_five), 5);
// no_five == { 1, 2, 3, 4, 6, 7, 8, 9 }