#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "drop_code.h"
    auto cmp1 = {7, 2, 4, 6, 8};
    assert(std::ranges::equal(out1, cmp1));
    auto cmp2 = {2, 4, 6, 8};
    assert(std::ranges::equal(out2, cmp2));
}
