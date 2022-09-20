namespace A {
    struct X {};
    void some_func(const X&) {}
}

namespace B {
    struct Y {};
    void some_func(const Y&) {}
}

void some_func(const auto&) {}

void calling_site() {
    A::X x; B::Y y;
    some_func(x); // Calls A::some_func     
    some_func(y); // Calls B::some_func
}
