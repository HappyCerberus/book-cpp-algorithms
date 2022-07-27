#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "keys_values_code.h"

    auto cmp1 = {0, 1, 2, 3};
    auto cmp2 = {1.0, 1.5, 2.0, 2.5};
    assert(std::ranges::is_permutation(keys, cmp1));
    assert(std::ranges::is_permutation(values, cmp2));

    std::cerr << ".";
}
