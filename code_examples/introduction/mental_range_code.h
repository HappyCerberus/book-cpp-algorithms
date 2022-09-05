std::vector<int> data{1, 2, 3, 4, 5, 6, 7};
std::vector<int> out(7,0);

std::copy(data.begin(), data.end(), // input range
    out.begin() // output range, end iterator is implied:
    // std::next(out.begin(),
    // 		std::distance(data.begin(), data.end()));
);
