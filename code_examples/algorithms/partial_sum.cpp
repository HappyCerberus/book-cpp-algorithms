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
#include "partial_sum_code.h"
auto cmp1 = {1, 2, 3, 4, 5, 6};
auto cmp2 = {1, 2, 6, 24, 120, 720};
assert(std::ranges::equal(data, cmp1));
assert(std::ranges::equal(out, cmp2));

std::cerr << ".";
}
