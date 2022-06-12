#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

struct StatsFn {
    int cnt = 0;
    int sum = 0;
    void operator()(int v) {
        cnt++;
        sum += v;
    }
};

void example() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto result = std::for_each(data.begin(), data.end(), StatsFn{});
    // result == {9, 45}
}

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto result = std::for_each(data.begin(), data.end(), StatsFn{});
    assert(result.cnt == 9);
    assert(result.sum == 45);
    std::cout << ".";
}
