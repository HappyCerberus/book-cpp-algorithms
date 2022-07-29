#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>
#include <charconv>

int main() {
#include "split_code.h"
    auto cmp1 = {1, 23, 13, 42};
    assert(std::ranges::equal(parsed, cmp1));
}
