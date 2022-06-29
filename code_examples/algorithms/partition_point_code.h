std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
auto pp = std::partition_point(data.begin(), data.end(), 
                                [](int v) { return v < 5; });
// *pp == 5
