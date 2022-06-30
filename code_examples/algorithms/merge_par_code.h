std::vector<int> data1{1, 2, 3, 4, 5, 6};
std::vector<int> data2{3, 4, 5, 6, 7, 8};

std::vector<int> out(data1.size()+data2.size(), 0);
std::merge(std::execution::par_unseq,
	data1.begin(), data1.end(),
	data2.begin(), data2.end(),
	out.begin());
// out == {1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8}
