std::vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
auto it1 = arr.begin();
it1 += 5; // OK, std::vector provides random access iterator
++it1; // OK, all iterators provide advance operation

ptrdiff_t dst1 = it1 - arr.begin(); // OK, random access iterator
// dst1 == 6

std::list<int> lst = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
auto it2 = lst.begin();
// it2 += 5; Would not compile.
std::advance(it2, 5); // OK, linear advance by 5 steps
++it2; // OK, all iterators provide advance operation

// it2 - lst.begin(); Would not compile
ptrdiff_t dst2 = std::distance(lst.begin(), it2); // OK, linear calc. 
// dst2 == 6
