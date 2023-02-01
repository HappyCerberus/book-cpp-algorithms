int x = -1;
unsigned y = 1;
long z = -1;

auto t1 = x > y;
auto t2 = std::cmp_greater(x,y);
// t1 == true, t2 == false

auto t3 = z < y;
auto t4 = std::cmp_less(z,y);
// t3 == true, t4 == true