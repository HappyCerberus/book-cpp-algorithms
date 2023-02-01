template <typename T> concept IsInt = std::same_as<int, T>;
void function(const IsInt auto&) {}

function(0); // OK
// function(0u); // will fail to compile, deduced type unsigned