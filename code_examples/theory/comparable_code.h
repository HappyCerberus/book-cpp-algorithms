struct Point {

int x;
int y;

// pre-C++20 lexicographical less-than
friend bool operator<(const Point& left, const Point& right) {
	if (left.x != right.x)
		return left.x < right.x;
	return left.y < right.y;
}

// default C++20 spaceship version of lexicographical comparison
friend auto operator<=>(const Point&, const Point&) = default;

// manual implementation spaceship operator lexicographical comparison
friend auto operator<=>(const Point& left, const Point& right) {
	if (left.x != right.x)
		return left.x <=> right.x;
	return left.y <=> right.y;
}

};
