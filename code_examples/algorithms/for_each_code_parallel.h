struct Custom {
	void expensive_operation() {
		// ...
	}
};

std::vector<Custom> data(10);

std::for_each(std::execution::par_unseq,
	data.begin(), data.end(),
	[](Custom& el) {
		el.expensive_operation();
	});