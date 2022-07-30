#include <iostream>
#include <algorithm>
#include <ranges>
#include <vector>
#include <cassert>

int main() {
#include "iota_code.h"
    auto cmp1 = {2, 3, 4};
    assert(std::ranges::equal(cmp1, out1));
    auto cmp2 = {42, 43, 44, 45, 46};
    assert(std::ranges::equal(cmp2, out2));
}
