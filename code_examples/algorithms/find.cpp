#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <span>

int main() {
#include "find_code.h"
std::vector<std::string> cmp{"John", "Doe", "April", "1", "1900"};
assert(std::ranges::equal(out, cmp));

std::cerr << ".";
}
