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

add_executable(adl_unqalified adl_unqalified.cpp)
# Compile only

add_executable(adl_simple adl_simple.cpp)
# Compile only

add_executable(adl_nonfunc adl_nonfunc.cpp)
# Compile only

add_executable(adl_shutdown adl_shutdown.cpp)
# Compile only

add_executable(adl_niebloid adl_niebloid.cpp)
# Compile only
