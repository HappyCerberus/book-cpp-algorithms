#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <memory>
#include <numeric>
#include <span>

int main() {
#include "rotate_code.h"
auto cmp = {4, 5, 6, 7, 1, 2, 3};
assert(std::ranges::equal(data, cmp));

std::cerr << ".";
}
