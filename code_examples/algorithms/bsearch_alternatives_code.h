int data[] = {-2, -1, 0, 1, 2};
int size = sizeof data / sizeof(int);

int value = 1;
bool exist = std::binary_search(&data[0], &data[size], value);
// exist == true

auto candidate = std::lower_bound(&data[0], &data[size], value);
if (candidate != &data[size] && *candidate == value) {
    // process element
}

auto [lb, ub] = std::equal_range(&data[0], &data[size], value);
if (lb != ub) {
    // process equal elements
}
