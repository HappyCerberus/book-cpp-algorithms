struct Account {
	double value() { return value_; }
	double value_;
};

std::vector<Account> accounts{{0.1}, {0.3}, {0.01}, {0.05}};
std::ranges::sort(accounts, std::greater<>{}, &Account::value);
// accounts = { {0.3}, {0.1}, {0.05}, {0.01} }