struct Account{
    double value();
};

std::vector<Account> data = get_data();

std::ranges::sort(data, std::greater<>{}, &Account::value);
