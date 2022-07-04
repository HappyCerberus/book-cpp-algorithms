#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <memory>
#include <numeric>

int main() {
#include "adjacent_difference_code.h"
auto cmp = {2, 1, 2, 2, 4, 2};
assert(std::ranges::equal(data, cmp));

std::cerr << ".";
}
