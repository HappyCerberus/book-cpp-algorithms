std::vector<std::tuple<int,int,std::string>> data{
	{1, 100, "Cat"}, {2, 99, "Dog"}, {3, 17, "Car"},
};

std::vector<int> second;
std::ranges::copy(data | std::views::elements<1>, std::back_inserter(second));
// second == {100, 99, 17}
    
std::vector<std::string> third;
std::ranges::copy(data | std::views::elements<2>, std::back_inserter(third));
// third == {"Cat", "Dog", "Car"}
