std::vector<int> range1{1, 2, 3};
std::vector<int> range2{1, 3};
std::vector<int> range3{1, 3, 1};

bool cmp1 = std::lexicographical_compare(range1.begin(), range1.end(),
	range2.begin(), range2.end());
// same as
bool cmp2 = range1 < range2;
// cmp1 == cmp2 == true

bool cmp3 = std::lexicographical_compare(range2.begin(), range2.end(),
	range3.begin(), range3.end());
// same as
bool cmp4 = range2 < range3;
// cmp3 == cmp4 == true
