#include <vector>
#include <algorithm>
#include <iostream>
#include <execution>
#include <cassert>

#include "swap_calling_code.h"

int main() {
    int x = 1, y = 2;
    some_algorithm(x, y);

    std::string i = "abcdefg", j = "jklmno";
    some_algorithm(i,j);
}
