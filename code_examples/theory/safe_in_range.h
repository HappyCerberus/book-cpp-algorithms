auto t1 = std::in_range<int>(UINT_MAX);
// t1 == false
auto t2 = std::in_range<int>(0);
// t2 == true
auto t3 = std::in_range<unsigned>(-1);
// t3 == false