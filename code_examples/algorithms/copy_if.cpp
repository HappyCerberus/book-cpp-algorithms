#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>
#include <ranges>
#include <execution>
#include <cmath>
#include <list>

int main() {
#include "copy_if_code.h"
auto cmp1 = {2, 4, 6, 8};
assert(std::ranges::equal(even, cmp1));
auto cmp2 = {1, 3, 5, 7, 9};
assert(std::ranges::equal(odd, cmp2));
auto cmp3 = { 1, 2, 3, 4, 6, 7, 8, 9 };
assert(std::ranges::equal(no_five, cmp3));

std::cerr << ".";
}
