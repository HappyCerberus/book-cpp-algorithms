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

int main() {
#include "iota_view_code.h"
auto cmp = { 6, 8, 10, 12, 14, 16, 18, 20, 22 };
assert(std::ranges::equal(data, cmp));

std::cerr << ".";
}
