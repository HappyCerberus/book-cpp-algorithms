#include <vector>
#include <iterator>
#include <concepts>
#include <ranges>
#include <cassert>
#include <iostream>

#include "concepts_code.h"

int main() {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> out;
    my_function(data, std::back_inserter(out));
    assert(out.size() == 2);
    assert(out[0] == 5);
    assert(out[1] == 7);
    std::cerr << ".";   
}
