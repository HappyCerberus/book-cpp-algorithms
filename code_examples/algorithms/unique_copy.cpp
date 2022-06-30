#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>
#include <execution>

int main() {
#include "unique_copy_code.h"

auto cmp = {1, 2, 3, 4, 5, 6};
assert(std::ranges::equal(out, cmp));

std::cerr << ".";
}
