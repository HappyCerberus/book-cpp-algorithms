#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>
#include <execution>

int main() {
#include "merge_par_code.h"
auto cmp = {1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8};
assert(std::ranges::equal(out, cmp));

std::cerr << ".";
}
