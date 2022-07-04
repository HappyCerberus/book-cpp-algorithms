std::vector<int> data{1, 2, 3};
do {
    // iterate over:
    // 1, 2, 3
    // 1, 3, 2
    // 2, 1, 3
    // 2, 3, 1
    // 3, 1, 2
    // 3, 2, 1
} while (std::next_permutation(data.begin(), data.end()));
// data == {1, 2, 3}
