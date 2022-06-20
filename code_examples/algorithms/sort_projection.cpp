#include <algorithm>
#include <cassert>
#include <concepts>
#include <vector>
#include <iostream>

int main() {
#include "sort_projection_code.h"
auto cmp = {Account{0.3}, Account{0.1}, Account{0.05}, Account{0.01}};
auto cmp_fn = [](auto l, auto r) { return l.value_ == r.value_; };
assert(std::ranges::equal(accounts, cmp, cmp_fn));

std::cerr << ".";
}
