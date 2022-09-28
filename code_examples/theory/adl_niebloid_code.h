namespace dflt {
namespace impl {
    template <typename T> 
    concept HasCustomImpl = requires(T a) { do_something(a); };

    struct DoSomethingFn { 
        template <typename T> void operator()(T&& arg) const
        requires HasCustomImpl<T> {
            do_something(std::forward<T>(arg));
        }

        template <typename T> void operator()(T&&) const
        requires (!HasCustomImpl<T>) { /* default implementation */ }
    };
}

inline namespace var {
    constexpr inline auto do_something = impl::DoSomethingFn{};
}
}

namespace custom { 
    struct X { friend void do_something(const X&){}; }; 
    struct Y {};
}

void calling_site() {
    custom::X x;
    custom::Y y;
    dflt::do_something(x); // calls custom::do_something(const X&)
    dflt::do_something(y); // calls default implementation
}
