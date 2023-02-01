struct LabeledValue {
    int value;
    std::string label;
};

std::vector<LabeledValue> data1{
	{1, "first"}, {2, "first"}, {3, "first"}};
std::vector<LabeledValue> data2{
	{0, "second"}, {2, "second"}, {4, "second"}};

std::vector<LabeledValue> result;
auto cmp = [](const auto& left, const auto& right)
	{ return left.value < right.value; };

std::ranges::merge(data1, data2, std::back_inserter(result), cmp);
// result == {0, second}, {1, first}, {2, first},
//           {2, second}, {3, first}, {4, second}