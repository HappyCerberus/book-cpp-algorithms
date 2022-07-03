#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>
#include <ranges>
#include <execution>

int main() {
#include "transform_inclusive_code.h"
auto cmp1 = {-10, -7, -9, -4, 2};
auto cmp2 = {10, 13, 15, 20, 26};
assert(std::ranges::equal(out1, cmp1));
assert(std::ranges::equal(out2, cmp2));

std::cerr << ".";
}
