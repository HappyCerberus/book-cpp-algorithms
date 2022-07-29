#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>
#include <charconv>

int main() {
#include "transform_code.h"
    auto cmp1 = {1, 5, 9, 20, 50, 67};
    assert(std::ranges::equal(out, cmp1));
}
