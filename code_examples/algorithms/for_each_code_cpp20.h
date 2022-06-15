struct Custom {
	explicit Custom(double value) : value_(value) {}
	double getValue() { return value_; }
private:
	double value_;    
};

std::vector<Custom> data(10, Custom{1.0});

double sum = 0;
std::ranges::for_each(data,
	[&sum](auto v) { sum += v; },
	&Custom::getValue);
// sum == 10.0
