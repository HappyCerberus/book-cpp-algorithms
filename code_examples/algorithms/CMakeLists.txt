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

add_executable(make_heap make_heap.cpp)
install(TARGETS make_heap DESTINATION bin)

add_executable(push_heap push_heap.cpp)
install(TARGETS push_heap DESTINATION bin)

add_executable(sort_heap sort_heap.cpp)
install(TARGETS sort_heap DESTINATION bin)

add_executable(is_heap is_heap.cpp)
install(TARGETS is_heap DESTINATION bin)

add_executable(lower_bound lower_bound.cpp)
install(TARGETS lower_bound DESTINATION bin)

add_executable(lower_bound_set lower_bound_set.cpp)
install(TARGETS lower_bound_set DESTINATION bin)

add_executable(equal_with_range equal_with_range.cpp)
install(TARGETS equal_with_range DESTINATION bin)

add_executable(partition_point  partition_point.cpp)
install(TARGETS partition_point DESTINATION bin)

# TODO (doesn't compile on GCC 11)
#add_executable(binary_search binary_search.cpp)
#install(TARGETS binary_search DESTINATION bin)

add_executable(bsearch bsearch.cpp)
install(TARGETS bsearch DESTINATION bin)

add_executable(bsearch_alternatives bsearch_alternatives.cpp)
install(TARGETS bsearch_alternatives DESTINATION bin)

add_executable(includes includes.cpp)
install(TARGETS includes DESTINATION bin)

add_executable(merge merge.cpp)
install(TARGETS merge DESTINATION bin)

add_executable(merge_par merge_par.cpp)
install(TARGETS merge_par DESTINATION bin)

add_executable(inplace_merge inplace_merge.cpp)
install(TARGETS inplace_merge DESTINATION bin)

add_executable(unique unique.cpp)
install(TARGETS unique DESTINATION bin)

add_executable(unique_copy unique_copy.cpp)
install(TARGETS unique_copy DESTINATION bin)

add_executable(set_difference set_difference.cpp)
install(TARGETS set_difference DESTINATION bin)

add_executable(set_difference_equal set_difference_equal.cpp)
install(TARGETS set_difference_equal DESTINATION bin)

add_executable(set_symmetric_difference set_symmetric_difference.cpp)
install(TARGETS set_symmetric_difference DESTINATION bin)

add_executable(set_symmetric_difference_equal set_symmetric_difference_equal.cpp)
install(TARGETS set_symmetric_difference_equal DESTINATION bin)

add_executable(set_union set_union.cpp)
install(TARGETS set_union DESTINATION bin)

add_executable(set_union_equal set_union_equal.cpp)
install(TARGETS set_union_equal DESTINATION bin)

add_executable(set_intersection set_intersection.cpp)
install(TARGETS set_intersection DESTINATION bin)

add_executable(set_intersection_equal set_intersection_equal.cpp)
install(TARGETS set_intersection_equal DESTINATION bin)

add_executable(accumulate accumulate.cpp)
install(TARGETS accumulate DESTINATION bin)

add_executable(accumulate_right accumulate_right.cpp)
install(TARGETS accumulate_right DESTINATION bin)

add_executable(inner_product inner_product.cpp)
install(TARGETS inner_product DESTINATION bin)

add_executable(inner_product_one inner_product_one.cpp)
install(TARGETS inner_product_one DESTINATION bin)

add_executable(partial_sum partial_sum.cpp)
install(TARGETS partial_sum DESTINATION bin)

add_executable(reduce reduce.cpp)
install(TARGETS reduce DESTINATION bin)

add_executable(reduce_noinit reduce_noinit.cpp)
install(TARGETS reduce_noinit DESTINATION bin)

add_executable(transform_reduce transform_reduce.cpp)
install(TARGETS transform_reduce DESTINATION bin)

add_executable(inclusive_scan inclusive_scan.cpp)
install(TARGETS inclusive_scan DESTINATION bin)

add_executable(exclusive_scan exclusive_scan.cpp)
install(TARGETS exclusive_scan DESTINATION bin)

add_executable(transform_inclusive transform_inclusive.cpp)
install(TARGETS transform_inclusive DESTINATION bin)

add_executable(all_of all_of.cpp)
install(TARGETS all_of DESTINATION bin)

add_executable(generate generate.cpp)
install(TARGETS generate DESTINATION bin)

add_executable(fill_n fill_n.cpp)
install(TARGETS fill_n DESTINATION bin)

add_executable(iota iota.cpp)
install(TARGETS iota DESTINATION bin)

# TODO Does not compile on GCC 11
#add_executable(iota_view iota_view.cpp)
#install(TARGETS iota_view DESTINATION bin)

add_executable(copy copy.cpp)
install(TARGETS copy DESTINATION bin)

add_executable(move move.cpp)
install(TARGETS move DESTINATION bin)

add_executable(move_nomove move_nomove.cpp)
# Compile-only

add_executable(copy_backward copy_backward.cpp)
install(TARGETS copy_backward DESTINATION bin)

add_executable(copy_n copy_n.cpp)
install(TARGETS copy_n DESTINATION bin)

add_executable(copy_if copy_if.cpp)
install(TARGETS copy_if DESTINATION bin)

add_executable(sample sample.cpp)
install(TARGETS sample DESTINATION bin)

add_executable(replace_copy replace_copy.cpp)
install(TARGETS replace_copy DESTINATION bin)

add_executable(reverse_copy reverse_copy.cpp)
install(TARGETS reverse_copy DESTINATION bin)

add_executable(rotate_copy rotate_copy.cpp)
install(TARGETS rotate_copy DESTINATION bin)

add_executable(create_at create_at.cpp)
# Compile-only

add_executable(uninitialized_constr uninitialized_constr.cpp)
# Compile-only

add_executable(uninitialized_copy uninitialized_copy.cpp)
# Compile-only

add_executable(transactional transactional.cpp)
# Compile-only

add_executable(transform transform.cpp)
install(TARGETS transform DESTINATION bin)

add_executable(adjacent_difference adjacent_difference.cpp)
install(TARGETS adjacent_difference DESTINATION bin)

add_executable(adjacent_difference_extra adjacent_difference_extra.cpp)
install(TARGETS adjacent_difference_extra DESTINATION bin)

add_executable(remove remove.cpp)
install(TARGETS remove DESTINATION bin)
