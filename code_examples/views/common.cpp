#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "common_code.h"
    auto cmp1 = {2, 4, 6, 8};
    assert(std::ranges::equal(out, cmp1));
}
