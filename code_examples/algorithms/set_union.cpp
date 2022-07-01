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
#include "set_union_code.h"
auto cmp = {1, 2, 3, 4, 5, 6};
assert(std::ranges::equal(set_union, cmp));

std::cerr << ".";
}
