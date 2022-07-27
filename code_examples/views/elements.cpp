#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>

int main() {
#include "elements_code.h"
    std::vector<std::string> cmp1 = {"Cat", "Dog", "Car"};
    assert(std::ranges::equal(third, cmp1));
    auto cmp2 = {100, 99, 17};
    assert(std::ranges::equal(second, cmp2));
    std::cerr << ".";
}
