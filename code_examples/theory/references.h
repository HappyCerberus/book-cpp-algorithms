void function(const int& v) {}

long a = 0;
long long b = 0;
// Even when long and long long have the same size
static_assert(sizeof(a) == sizeof(b));
// The two types are unrelated in the context of references
// The following two statements wouldn't compile:
// long long& c = a;
// long& d = b;

// OK, but dangerous, implict conversion to int
// int temporary can bind to const int&
function(a);
function(b);