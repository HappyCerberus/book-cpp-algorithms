std::vector<int> data{1, 4, 5, 7, 9, 2, 3};

// is_sorted_until returns the first out of order element.
auto result = std::is_sorted_until(data.begin(), data.end());

// [begin, result) is the maximal sorted sub-range
for (auto it = data.begin(); it != result; it++) {
    // Iterate over all elements in the sorted sub-range.
    // {1, 4, 5, 7, 9}
}
for (auto v : std::ranges::subrange(data.begin(), result)) {
    // Same, but using a range-based for loop.
}
