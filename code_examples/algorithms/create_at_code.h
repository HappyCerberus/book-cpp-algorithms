alignas(alignof(std::string)) char mem[sizeof(std::string)];
auto *ptr = reinterpret_cast<std::string*>(mem);

std::construct_at(ptr, 8, 'X');
// *ptr == "XXXXXXXX", ptr->length() == 8
std::destroy_at(ptr);
