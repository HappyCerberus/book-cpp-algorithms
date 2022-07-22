add_executable(concepts concepts.cpp)
install(TARGETS concepts DESTINATION bin)

add_executable(infinite infinite.cpp)
# Compile-only

add_executable(rangified rangified.cpp)
install(TARGETS rangified DESTINATION bin)
