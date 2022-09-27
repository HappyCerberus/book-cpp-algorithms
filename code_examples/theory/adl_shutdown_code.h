namespace Custom {
    struct X {
        friend void some_func(const X&) {}
    };
}

constexpr inline auto some_func = [](const auto&) {};

void calling_site() {
    Custom::X x;
    some_func(x); // calls ::some_func
    // Because ::some_func prevents ADL, Custom::some_func cannot be called.
}
