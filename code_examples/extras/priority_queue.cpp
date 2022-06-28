#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>
#include <queue>

#include "priority_queue_queue_code.h"
#include "priority_queue_heap_code.h"

int main() {
std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};

auto result = topk_queue(data.begin(), data.end(), 4);
assert(result.size() == 4);
auto cmp = {9, 8, 7, 6};
assert(std::ranges::equal(result, cmp));

auto result2 = topk_heap(data.begin(), data.end(), 4);
assert(result2.size() == 4);
assert(std::ranges::equal(result2, cmp));

std::cerr << ".";
}
