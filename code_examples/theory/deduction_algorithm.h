std::vector<unsigned> data{1, 2, 3, 4, 5, 6, 7, 8, 9};

auto v = std::accumulate(data.begin(), data.end(), 0);
// 0 is a literal of type int. Internally this means that
// the accumulator (and result) type of the algorithm will be 
// int, despite iterating over a container of type unsigned.

// v == 45, decltype(v) == int