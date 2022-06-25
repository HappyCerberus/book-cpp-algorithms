#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <span>

int main() {
#include "min_element_dangling_code.h"
static_assert(std::is_same<decltype(i),std::ranges::dangling>::value);
assert(*j == 3);

std::cerr << ".";
}
