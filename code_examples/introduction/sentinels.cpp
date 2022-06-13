#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

int main() {
#include "sentinels_code.h"
assert((data.begin() == Sentinel{data.begin(), 0}));
assert((data.begin() != Sentinel{data.begin(), 1}));
auto it = data.begin() + 5;
assert((it == Sentinel{data.begin(), 0}));
assert((it == Sentinel{data.begin(), 5}));
assert((it != Sentinel{data.begin(), 6}));

std::cerr << ".";
}
