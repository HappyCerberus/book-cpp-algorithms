template <typename It, typename Cond>
	requires std::forward_iterator<It> 
		&& std::indirectly_swappable<It,It> 
		&& std::predicate<Cond>
auto partition(It first, It last, Cond cond) {
	while (first != last && cond(first)) ++first;
	if (first == last) return last;

	for (auto it = std::next(first); it != last; it++) {
		if (!cond(it)) continue;

		std::iter_swap(it, first);
		++first;
	}
	return first;
}
