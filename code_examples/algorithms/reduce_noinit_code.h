struct Duck {
	std::string sound = "Quack";
	Duck operator+(const Duck& right) const {
		return {sound+right.sound};
	}
};

std::vector<Duck> data(2, Duck{});
Duck final_duck = std::reduce(data.begin(), data.end());
// final_duck.sound == "QuackQuackQuack"