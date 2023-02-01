std::list<int> data{1, 2, 3, 4, 5, 6, 7, 8};
auto view = data | std::views::drop(3);

for (auto v : view) {
    // iterate over: 4, 5, 6, 7, 8
}

// Note, if we used std::vector, push could invalidate 
// the cached iterator inside of std::views::drop.
data.push_front(99);
for (auto v : view) {
    // iterate over: 4, 5, 6, 7, 8
}

// Fresh view
for (auto v : data | std::views::drop(3)) {
    // iterate over: 3, 4, 5, 6, 7, 8
}

const auto view2 = data | std::views::drop(3);
// for (auto v : view2) {}
// Wouldn't compile, std::views::drop requires mutability.