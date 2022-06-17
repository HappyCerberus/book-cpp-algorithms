#include <algorithm>
#include <cassert>
#include <concepts>
#include <vector>
#include <iostream>

#include "iter_swap_partition_code.h"

int main() {
    std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto it = partition(data.begin(), data.end(), [](int v) {
        return v%2 == 0;
        });
    assert(it == (data.begin() + 4));
    auto cmp = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    assert(std::is_permutation(data.begin(), data.end(), cmp.begin()));
    assert(std::is_partitioned(data.begin(), data.end(), [](int v) {
        return v%2 == 0;
    }));
    std::cerr << ".";
}
