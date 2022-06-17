namespace Library {
struct Storage {
	int value;
};

void swap(Storage& left, Storage& right) {
	std::ranges::swap(left.value, right.value);
}
}

int main() {
	int a = 1, b = 2;
	std::ranges::swap(a, b); // 3-step-swap

	Library::Storage j{2}, k{3};
	std::ranges::swap(j, k); // calls custom Library::swap()
}
