std::vector<int> data{1, 2, 3, 4, 5};

auto it = std::remove(data.begin(), data.end(), 3);
// data == { 1, 2, 4, 5, ?}

data.erase(it, data.end()); // Erase sub-range
// data == {1, 2, 4, 5}

auto is_even = [](int v) { return v % 2 == 0; };
it = std::remove_if(data.begin(), data.end(), is_even);
// data == {1, 5, ?, ?}

data.resize(it - data.begin()); // Random Access Ranges only
// data = {1, 5}
