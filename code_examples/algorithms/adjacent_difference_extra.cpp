#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <memory>
#include <numeric>

int main() {
#include "adjacent_difference_extra_code.h"
auto cmp = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
assert(std::ranges::equal(data, cmp));

std::cerr << ".";
}
