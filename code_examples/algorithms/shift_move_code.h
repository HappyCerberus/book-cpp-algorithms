struct EmptyOnMove {
    char value;
    EmptyOnMove(char value) : value(value) {}
    EmptyOnMove(EmptyOnMove&& src) : 
        value(std::exchange(src.value,'-')) {}
    EmptyOnMove& operator=(EmptyOnMove&& src) {
        value = std::exchange(src.value, '-');
        return *this;
    }
    EmptyOnMove(const EmptyOnMove&) = default;
    EmptyOnMove& operator=(const EmptyOnMove&) = default;
};

int main() {
    std::vector<EmptyOnMove> nontrivial{
        {'a'},{'b'},{'c'},{'d'},{'e'},{'f'},{'g'}};

    std::shift_right(nontrivial.begin(), nontrivial.end(), 4);
    // nontrivial == { '-', '-', '-', 'd', 'a', 'b', 'c' }
}