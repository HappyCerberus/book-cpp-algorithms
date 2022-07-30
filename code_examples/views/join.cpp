#include <iostream>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <vector>
#include <cassert>
#include <charconv>
#include <sstream>
#include <string_view>

int main() {
#include "join_code.h"
    assert(out == "CarDogWindow");
    std::vector<std::string> cmp = {"Car", "Dog", "Window"};
    assert(std::ranges::equal(cmp, words));
}
