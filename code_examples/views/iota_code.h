std::vector<int> out1;
std::ranges::copy(std::views::iota(2,5), std::back_inserter(out1));
// finite view [2, 5), out == {2, 3, 4}

std::vector<int> out2;
std::ranges::copy(std::views::iota(42) | std::views::take(5),
std::back_inserter(out2));
// infinite view starting with 42, take(5) takes the first five elements from this view
// out2 == {42, 43, 44, 45, 46}
