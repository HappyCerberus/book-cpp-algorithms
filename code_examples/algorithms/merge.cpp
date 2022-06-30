#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <numeric>

int main() {
#include "merge_code.h"
std::vector<LabeledValue> test = {{0, "second"}, {1, "first"}, {2, "first"}, {2, "second"}, {3, "first"}, {4, "second"}};
assert(std::equal(result.begin(), result.end(), test.begin(),
[](const auto& left, const auto& right) {
    return left.value == right.value && left.label == right.label;
}));

std::cerr << ".";
}
