add_executable(for_each for_each.cpp)
install(TARGETS for_each DESTINATION bin)

add_executable(for_each_n for_each_n.cpp)
install(TARGETS for_each_n DESTINATION bin)

add_executable(swap_calling swap_calling.cpp)
# Compile only

add_executable(swap_range swap_range.cpp)
# Compile only

add_executable(iter_swap_unique_ptr iter_swap_unique_ptr.cpp)
install(TARGETS iter_swap_unique_ptr DESTINATION bin)

add_executable(iter_swap_partition iter_swap_partition.cpp)
install(TARGETS iter_swap_partition DESTINATION bin)

add_executable(swap_ranges swap_ranges.cpp)
install(TARGETS swap_ranges DESTINATION bin)

add_executable(lexicographical_compare lexicographical_compare.cpp)
install(TARGETS lexicographical_compare DESTINATION bin)

add_executable(lexicographical_compare_three_way lexicographical_compare_three_way.cpp)
install(TARGETS lexicographical_compare_three_way DESTINATION bin)

add_executable(lexicographical_compare_useful lexicographical_compare_useful.cpp)
install(TARGETS lexicographical_compare_useful DESTINATION bin)

add_executable(sort sort.cpp)
install(TARGETS sort DESTINATION bin)
