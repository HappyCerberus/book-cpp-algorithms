namespace Custom {
struct X {
	friend std::ostream& operator << (std::ostream& s, const X&) {
		s << "Output of X\n";
		return s;
	}
};
}

void calling_site() {
	Custom::X x;
	// Custom::operator << (std::cout, x); // Not visible
	std::cout << x; // OK, unqualified operator <<, ADL kicks in
}
