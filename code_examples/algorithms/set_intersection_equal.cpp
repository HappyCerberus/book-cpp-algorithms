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
#include "set_intersection_equal_code.h"
std::ranges::transform(intersection,
std::ostream_iterator<std::string>(std::cout, ", "),
&Labeled::label);

assert(intersection.size() == 2);
assert(intersection[0].label == "first_a");
assert(intersection[1].label == "first_b");

std::cerr << ".";
}
