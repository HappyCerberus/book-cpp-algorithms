#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
#include <string>

struct Item {
    std::string label;
    bool is_selected_;
    bool is_selected() const {
        return is_selected_;
    }
    friend auto operator<=>(const Item&, const Item&) = default;
};

struct Widget {
    std::vector<Item> items;
};

Widget& get_widget() {
    static Widget widget{ .items = {{"a", true}, {"b", false}, {"c", true}, {"d", false}, {"e", true}, {"f", false}}};
    return widget;
}

int main() {
#include "stable_partition_code.h"
std::vector<Item> cmp = {{"a", true},  {"c", true}, {"e", true}, {"b", false}, {"d", false}, {"f", false}};
assert(std::ranges::equal(widget.items, cmp));
std::cerr << ".";
}
