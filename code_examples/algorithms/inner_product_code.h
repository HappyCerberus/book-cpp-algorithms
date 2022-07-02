std::vector<int> heights{1, 2, 3, 4, 5};
std::vector<int> widths{2, 3, 4, 5, 6};

auto total_area = std::inner_product(heights.begin(), heights.end(),
	widths.begin(), 0);
// total_area == 70
