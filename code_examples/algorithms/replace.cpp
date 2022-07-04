#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <memory>
#include <numeric>

int main() {
#include "replace_code.h"
auto cmp = {-1, 2, -1, 0, -1, 6, -1};
assert(std::ranges::equal(data, cmp));

std::cerr << ".";
}
