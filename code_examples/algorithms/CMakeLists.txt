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

add_executable(sort_projection sort_projection.cpp)
install(TARGETS sort_projection DESTINATION bin)

add_executable(stable_sort stable_sort.cpp)
install(TARGETS stable_sort DESTINATION bin)

add_executable(is_sorted is_sorted.cpp)
install(TARGETS is_sorted DESTINATION bin)

add_executable(is_sorted_until is_sorted_until.cpp)
install(TARGETS is_sorted_until DESTINATION bin)

add_executable(partial_sort partial_sort.cpp)
install(TARGETS partial_sort DESTINATION bin)

add_executable(partial_sort_copy partial_sort_copy.cpp)
# Compile-only

add_executable(qsort qsort.cpp)
install(TARGETS qsort DESTINATION bin)

add_executable(qsort_not qsort_not.cpp)
install(TARGETS qsort_not DESTINATION bin)

add_executable(partition partition.cpp)
install(TARGETS partition DESTINATION bin)

add_executable(is_partitioned is_partitioned.cpp)
install(TARGETS is_partitioned DESTINATION bin)

add_executable(partition_copy partition_copy.cpp)
install(TARGETS partition_copy DESTINATION bin)

add_executable(nth_element nth_element.cpp)
install(TARGETS nth_element DESTINATION bin)

add_executable(min_max min_max.cpp)
install(TARGETS min_max DESTINATION bin)

add_executable(minmax minmax.cpp)
install(TARGETS minmax DESTINATION bin)

add_executable(minmax_extra minmax_extra.cpp)
install(TARGETS minmax_extra DESTINATION bin)

add_executable(clamp clamp.cpp)
install(TARGETS clamp DESTINATION bin)

add_executable(min_element min_element.cpp)
install(TARGETS min_element DESTINATION bin)

add_executable(min_element_dangling min_element_dangling.cpp)
install(TARGETS min_element_dangling DESTINATION bin)

add_executable(find find.cpp)
install(TARGETS find DESTINATION bin)

add_executable(find_if find_if.cpp)
install(TARGETS find_if DESTINATION bin)

add_executable(adjacent_find adjacent_find.cpp)
install(TARGETS adjacent_find DESTINATION bin)

add_executable(search_n search_n.cpp)
install(TARGETS search_n DESTINATION bin)

add_executable(find_first_of find_first_of.cpp)
install(TARGETS find_first_of DESTINATION bin)

add_executable(search search.cpp)
install(TARGETS search DESTINATION bin)

add_executable(searchers searchers.cpp)
install(TARGETS searchers DESTINATION bin)

add_executable(count count.cpp)
install(TARGETS count DESTINATION bin)

add_executable(equal equal.cpp)
install(TARGETS equal DESTINATION bin)

add_executable(mismatch mismatch.cpp)
install(TARGETS mismatch DESTINATION bin)

add_executable(equal_range equal_range.cpp)
install(TARGETS equal_range DESTINATION bin)
