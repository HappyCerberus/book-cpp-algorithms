#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "all_code.h"
    auto cmp1 = {1, 2, 3, 4};
    assert(std::ranges::equal(out, cmp1));
}
