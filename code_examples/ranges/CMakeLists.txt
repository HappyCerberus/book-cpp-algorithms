add_executable(concepts concepts.cpp)
install(TARGETS concepts DESTINATION bin)

add_executable(infinite infinite.cpp)
# Compile-only

add_executable(rangified rangified.cpp)
install(TARGETS rangified DESTINATION bin)

# Not-checked
# projection_code.h

add_executable(projected_type projected_type.cpp)
install(TARGETS projected_type DESTINATION bin)
