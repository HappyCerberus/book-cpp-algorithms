#include <algorithm>
#include <cassert>
#include <concepts>
#include <vector>
#include <iostream>

int main() {
#include "stable_sort_code.h"

std::vector<Record> cmp {{"a", 1}, {"f", 1}, {"q", 1}, {"c", 2}, {"d", 3}};
auto cmp_fn = [](auto l, auto r) { return l.label == r.label && l.rank == r.rank; };
assert(std::ranges::equal(data, cmp, cmp_fn));

std::cerr << ".";
}
