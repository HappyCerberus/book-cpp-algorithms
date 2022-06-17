auto p1 = std::make_unique<int>(1);
auto p2 = std::make_unique<int>(2);
int* p1_pre = p1.get();
int* p2_pre = p2.get();

std::ranges::iter_swap(p1, p2);
// p1.get() == p1_pre, *p1 == 2
// p2.get() == p2_pre, *p2 == 1
