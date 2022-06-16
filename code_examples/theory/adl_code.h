namespace Custom {
struct X {};

std::ostream& operator << (std::ostream& s, const X&) {
	s << "Output of X\n";
	return s;
}
}

void calling_site() {
	Custom::X x;
	Custom::operator << (std::cout, x); // OK, explicit call
	std::cout << x; // OK, unqualified operator <<, ADL
}
