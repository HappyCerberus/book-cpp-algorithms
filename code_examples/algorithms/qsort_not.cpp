#include <algorithm>
#include <cassert>
#include <concepts>
#include <vector>
#include <iostream>
#include <iterator>

int main() {
#include "qsort_not_code.h"
auto cmp = {-8, -1, 1, 2, 7, 9};
assert(std::equal(&data[0], &data[size], cmp.begin()));
std::cerr << ".";
}
