std::vector<int> data{1,2,3,4,5,6,7,8,9};
// std::ssize returns ptrdiff_t, avoiding mixing 
// a signed and unsigned integer in the comparison
for (ptrdiff_t i = 0; i < std::ssize(data); i++) {
    std::cout << data[i] << " ";
}
std::cout << "\n";
// prints: "1 2 3 4 5 6 7 8 9"