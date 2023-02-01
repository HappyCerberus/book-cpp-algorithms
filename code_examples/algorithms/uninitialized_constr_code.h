alignas(alignof(std::string)) char buffer[sizeof(std::string)*10];
auto *begin = reinterpret_cast<std::string*>(buffer);
auto *it = begin;

it = std::uninitialized_default_construct_n(it, 3);
it = std::uninitialized_fill_n(it, 2, "Hello World!");
it = std::uninitialized_value_construct_n(it, 3);
it = std::uninitialized_fill_n(it, 2, "Bye World!");

// {"", "", "", "Hello World!", "Hello World!", "", "", "",
//  "Bye World!", "Bye World!"}

std::destroy_n(begin, 10);