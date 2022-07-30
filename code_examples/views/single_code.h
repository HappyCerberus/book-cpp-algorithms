std::vector<int> out;
std::ranges::copy(std::views::empty<int>, std::back_inserter(out));
// out == {}

std::ranges::copy(std::views::single(42), std::back_inserter(out));
// out == {42}
