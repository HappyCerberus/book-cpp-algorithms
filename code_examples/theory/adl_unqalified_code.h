namespace A {
void some_call(int) {}
namespace B {
void some_call(double) {}

void test() {
    some_call(1);   // A::B::some_call
    some_call(2.0); // A::B::some_call
}
}
}
