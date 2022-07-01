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
#include "set_union_equal_code.h"
assert(equal_union.size() == 4);
assert(equal_union[0].label == "first_a");
assert(equal_union[1].label == "first_b");
assert(equal_union[2].label == "first_c");
assert(equal_union[3].label == "second_c");

std::cerr << ".";
}
