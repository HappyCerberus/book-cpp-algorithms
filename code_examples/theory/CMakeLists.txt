add_executable(adl adl.cpp)
# Compile only

add_executable(adl_friend adl_friend.cpp)
# Compile only

add_executable(adl_default adl_default.cpp)
# Compile only

add_executable(const_cast const_cast.cpp)
install(TARGETS const_cast DESTINATION bin)

add_executable(initializer_list initializer_list.cpp)
install(TARGETS initializer_list DESTINATION bin)
