auto i = std::ranges::min_element(std::vector<int>{5, 3, -2, 0});
// decltype(i) == std::ranges::dangling

std::vector<int> data = { 5, 3, -2 , 0};
auto j = std::ranges::min_element(std::span(data.begin(), 2));
// *j == 3, std::span is a borrowed_range
