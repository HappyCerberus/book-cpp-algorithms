#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "take_code.h"
    auto cmp1 = {1, 3, 5};
    assert(std::ranges::equal(out1, cmp1));
    auto cmp2 = {1, 3, 5, 7};
    assert(std::ranges::equal(out2, cmp2));
}
