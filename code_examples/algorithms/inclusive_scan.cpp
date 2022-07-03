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
#include "inclusive_scan_code.h"
auto cmp = {1, 2, 6, 24, 120, 720};
assert(std::ranges::equal(out, cmp));

std::cerr << ".";
}
