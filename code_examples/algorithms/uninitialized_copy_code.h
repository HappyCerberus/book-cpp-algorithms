alignas(alignof(std::string)) char buff1[sizeof(std::string)*5];
alignas(alignof(std::string)) char buff2[sizeof(std::string)*5];
std::vector<std::string> data = {"hello", "world", "and", "everyone", "else"};

auto *bg1 = reinterpret_cast<std::string*>(buff1);
std::uninitialized_copy(data.begin(), data.end(), bg1);
// buff1 == { "hello", "world", "and", "everyone", "else"}
// data == { "hello", "world", "and", "everyone", "else"}
std::destroy_n(bg1, 5);

auto *bg2 = reinterpret_cast<std::string*>(buff2);
std::uninitialized_move(data.begin(), data.end(), bg2); 
// buff2 == { "hello", "world", "and", "everyone", "else"}
// data == { ?, ?, ?, ?, ?}
// In most implementations a moved-out-of string will be empty.
std::destroy_n(bg2, 5);
