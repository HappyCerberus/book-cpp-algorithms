int x = 10, y = 20;
int min = std::min(x, y);
// min == 10

std::string hello = "hello", world = "world";
std::string& universe = const_cast<std::string&>(std::max(hello, world));
universe = "universe";

std::string greeting = hello + " " + world;
// greeting == "hello universe"

int j = 20;
auto& k = std::max(5, j);
// IMPORTANT! only works because 5 < j
// would produce dangling reference otherwise
// k == 20
