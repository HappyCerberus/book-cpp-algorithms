#include <algorithm>
#include <cassert>
#include <concepts>
#include <vector>
#include <iostream>
#include <iterator>
#include <cstdint>
#include <string>

struct ExamResult {
    std::string student_name;
    uint16_t score;
    friend auto operator<=>(const ExamResult&, const ExamResult&)= default;
};

std::vector<ExamResult> get_results() {
    return {
        {"a", 10}, {"b", 40}, {"c", 50},
        {"d", 60}, {"e", 70}, {"f", 80}
    };
}

int main() {
#include "partition_code.h"

std::vector<ExamResult> cmp1 = { {"c", 50}, {"d", 60}, {"e", 70}, {"f", 80}};
std::vector<ExamResult> cmp2 = { {"a", 10}, {"b", 40}};

assert(std::is_permutation(results.begin(), pp, cmp1.begin(), cmp1.end()));
assert(std::is_permutation(pp, results.end(), cmp2.begin(), cmp2.end()));

std::cerr << ".";
}
