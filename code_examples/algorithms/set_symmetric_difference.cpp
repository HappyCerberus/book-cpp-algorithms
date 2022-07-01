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
#include "set_symmetric_difference_code.h"
auto cmp = {1, 4, 6, 9};
assert(std::ranges::equal(symmetric_difference, cmp));

std::cerr << ".";
}
