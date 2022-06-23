int x = 10, y = 20;

auto& v = const_cast<int&>(std::min(x, y));
v = 5;
// x == 5, y == 20

// !IMPORTANT! the following compiles, but is undefined behaviour
// i.e. the program is ill-formed
auto& w = const_cast<int&>(std::min(x, 3));
w = 10;
