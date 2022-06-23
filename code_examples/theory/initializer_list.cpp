#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>

#include "initializer_list_code.h"

int main() {
    example();
    assert(X::copy_cnt == 6);
    std::cerr << ".";
}
