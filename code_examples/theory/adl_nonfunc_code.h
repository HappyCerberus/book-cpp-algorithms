namespace Custom {
    struct X {};

    constexpr inline auto some_func = [](const X&) {};
}

void calling_site() {
    Custom::X x;
    // some_func(x); // Will not compile, not visible to ADL.
    Custom::some_func(x); // OK
}
