std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

struct Sentinel {
    using iter_t = std::vector<int>::iterator;
    iter_t begin;
    std::iter_difference_t<iter_t> cnt;
    bool operator==(const iter_t& l) const {
        return std::distance(begin, l) >= cnt;
    }
};

auto it1 = data.begin();
std::ranges::for_each(it1, Sentinel{it1, 5}, [](int el) {
    std::cout << el << ", ";
});
// Prints: 1, 2, 3, 4, 5, 
