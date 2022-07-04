#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <memory>

int main() {
#include "transform_code.h"
auto cmp = {10, 11, 12, 13, 14, 15, 16, 17};
assert(std::ranges::equal(data,cmp));

std::cerr << ".";
}
