#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>
#include <execution>

int main() {
#include "inplace_merge_code.h"
auto cmp = {1, 2, 3, 4, 5, 6};
assert(std::ranges::equal(range, cmp));

std::cerr << ".";
}
