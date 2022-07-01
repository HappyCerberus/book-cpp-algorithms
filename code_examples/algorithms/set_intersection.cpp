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
#include "set_intersection_code.h"
auto cmp = {2, 4};
assert(std::ranges::equal(intersection, cmp));

std::cerr << ".";
}
