auto topk_heap(
	std::input_iterator auto begin,
	std::sentinel_for<decltype(begin)> auto end,
	size_t k) {
     
	std::vector<std::iter_value_t<decltype(begin)>> result;

	while (begin != end) {
		result.push_back(*begin);
		std::ranges::push_heap(result, std::greater<>{});

		if (result.size() > k) {
			std::ranges::pop_heap(result, std::greater<>{});
			result.pop_back();
		}

		++begin;
	}
    
	std::ranges::sort_heap(result, std::greater<>{});
	return result;    
}
