struct A{};
struct B{};

std::vector<A> data(5);

std::vector<A> out1;
// std::vector<B> out1; would not compile
std::ranges::copy_if(data, std::back_inserter(out1), 
	[](B) { return true; }, // predicate accepts B
	[](A) { return B{}; }); // projection projects A->B

std::vector<B> out2;
std::ranges::transform(data, std::back_inserter(out2),
	[](auto x) { return x; },  // no-op transformation functor
	[](A) { return B{}; }); // projection projects A->B
