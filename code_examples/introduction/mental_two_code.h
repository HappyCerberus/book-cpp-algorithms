std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};

// lower_bound returns the first element !(el < 4)
auto lb = std::lower_bound(data.begin(), data.end(), 4);

for (auto v : std::ranges::subrange(data.begin(), lb)) {
    // lower range [begin, lb): elements < 4
}
for (auto v : std::ranges::subrange(lb, data.end())) {
    // upper range [lb, end): elements >= 4
}
