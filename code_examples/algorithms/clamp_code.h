int a = std::ranges::clamp(10, 0, 20);
// a == 10 (0 < 10 && 10 < 20)

int b = std::clamp(-20, 0, 20);
// b == 0 (-20 < 0)

int c = std::clamp(30, 0, 20);
// c == 20 ( 30 > 20 )

int x = 10, y = 20, z = 30;
int &w = const_cast<int&>(std::clamp(z, x, y));
w = 99;
// x == 10, y == 99, z == 30
