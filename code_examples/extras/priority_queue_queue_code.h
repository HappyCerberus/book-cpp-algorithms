auto topk_queue(
	std::input_iterator auto begin, 
	std::sentinel_for<decltype(begin)> auto end, 
	size_t k) {

	using vtype = std::iter_value_t<decltype(begin)>;
	using arrtype = std::vector<vtype>;

	std::priority_queue<vtype, arrtype, std::greater<vtype>> pq;

	while (begin != end) {
		pq.push(*begin);
		if (pq.size() > k)
			pq.pop();
		++begin;
	}

	arrtype result(k);
	for (auto &el: result | std::views::reverse) {
		el = std::move(pq.top());
		pq.pop();
	}

	return result;    
}

