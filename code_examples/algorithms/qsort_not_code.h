int data[] = {2, 1, 9, -1, 7, -8};
int size = sizeof data / sizeof(int);

std::sort(&data[0], &data[size], std::less<>());
// data == {-8, -1, 1, 2, 7, 9}