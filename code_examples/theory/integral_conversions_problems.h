int x = -1;
unsigned y = 1;
long z = -1;

auto t1 = x > y;
// x -> unsigned, t1 == true

auto t2 = z < y;
// y -> long, t2 == true