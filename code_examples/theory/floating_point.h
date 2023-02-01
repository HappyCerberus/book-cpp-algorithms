auto src = UINT64_MAX - UINT32_MAX;
auto m = (1.0f * src) * 1.0L;
auto n = 1.0f * (src * 1.0L);
// decltype(m) == decltype(n) == long double

std::cout << std::fixed << m << "\n" << n << "\n" << src << "\n";
// 18446744073709551616.000000
// 18446744069414584320.000000
// 18446744069414584320