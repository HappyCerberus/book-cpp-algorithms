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
#include "copy_backward_code.h"
std::vector<std::string> cmp1{ "a", "a", "b", "c", "d", "e" };
std::vector<std::string> cmp2{"", "", "", "a", "b", "c", "d", "e", "f"};

assert(std::ranges::equal(cmp1, data));
assert(std::ranges::equal(cmp2, out));

std::cerr << ".";
}
