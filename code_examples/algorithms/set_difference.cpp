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
#include "set_difference_code.h"
auto cmp = {1, 2, 6};
assert(std::ranges::equal(difference, cmp));

std::cerr << ".";
}
