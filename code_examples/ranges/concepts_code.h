template <std::ranges::random_access_range T>
auto my_function(T&& rng,
	std::output_iterator<std::ranges::range_value_t<T>> auto it) {
	if (rng.size() >= 5)
		*it++ = rng[4];
	if (rng.size() >= 7)
		*it++ = rng[6];
}
