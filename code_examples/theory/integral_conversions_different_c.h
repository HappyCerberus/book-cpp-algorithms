long long a = -100;
unsigned long b = 0; // assuming sizeof(long) == sizeof(long long)

auto v = a + b;
// v ~ -100 + (ULLONG_MAX + 1), decltype(v) == unsigned long long