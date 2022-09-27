namespace A {
void some_call(int) {}
void some_call(const char*) {}
namespace B {
void some_call(double) {}

void calling_site() {
    some_call(1);   // A::B::some_call
    some_call(2.0); // A::B::some_call
    // some_call("hello world"); will not compile
    // no conversion from const char* -> double
}
}
}
