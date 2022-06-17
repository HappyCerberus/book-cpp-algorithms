#include <algorithm>
#include <cassert>
#include <memory>
#include <iostream>

int main() {
#include "iter_swap_unique_ptr_code.h"
assert(p1.get() == p1_pre);
assert(p2.get() == p2_pre);
assert(*p1 == 2);
assert(*p2 == 1);
std::cerr << ".";
}
