#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>

struct ExamResult {
    std::string student_name;
    uint16_t score;
};

const std::vector<ExamResult>& get_results() {
    static std::vector<ExamResult> data{
        {"a", 20}, {"b", 48}, {"c", 49}, {"d", 60}, {"e", 98}, {"f", 99}, {"g", 100}
    };
    return data;
}

int main() {
#include "lower_bound_code.h"
assert(lb->score == 49);
assert(ub->score == 100);

std::cerr << ".";
}
