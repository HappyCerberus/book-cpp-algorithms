struct CopyOnly {
	CopyOnly() = default;
	CopyOnly(const CopyOnly&) = default;
	CopyOnly& operator=(const CopyOnly&) { 
		std::cout << "Copy assignment.\n";
		return *this;
	};
};

std::vector<CopyOnly> test(6);

std::move(test.begin(), test.begin()+3, test.begin()+3);
// 3x Copy assignment
