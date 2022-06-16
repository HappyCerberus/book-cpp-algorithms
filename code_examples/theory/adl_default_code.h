namespace Base {
	template <typename T>
	std::string serialize(const T&) {
		return std::string{"{Unknown type}"};
	}
}

namespace Custom {
struct X {
	friend std::string serialize(const X&) {
		return std::string{"{X}"};
	}
};

struct Y {};
}

void calling_site() {
	Custom::X x;
	Custom::Y y;
    
	auto serialized_x = serialize(x);
	// serialized_x == "{X}"

	// auto serialized_y = serialize(y); // Would not compile.
	
	using Base::serialize;  // Pull in default version.
	auto serialized_y = serialize(y);
	// serialized_y == "{Unknown type}"
}

