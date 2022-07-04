struct Custom {
	static int cnt;
	Custom() { 
		if (++cnt >= 3)
			throw std::runtime_error("Deliberate failure."); 
		std::cout << "Custom()\n";
	}
	~Custom() {
		std::cout << "~Custom()\n";
	}
};

int Custom::cnt = 0;

int main() {
	alignas(alignof(Custom)) char buffer[sizeof(Custom)*10];
	auto *begin = reinterpret_cast<Custom*>(buffer);

	try {
		std::uninitialized_default_construct_n(begin, 10);
		std::destroy_n(begin, 10); // not reached
	} catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}
}
/* OUTPUT:
	Custom()
	Custom()
	~Custom()
	~Custom()
	Deliberate failure.
*/
