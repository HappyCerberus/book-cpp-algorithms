int a = -100;
unsigned b = 0;

auto v = a + b;
// v ~ -100 + (UINT_MAX + 1), decltype(v) == unsigned