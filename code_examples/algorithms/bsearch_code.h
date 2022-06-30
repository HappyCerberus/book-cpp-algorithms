int data[] = {-2, -1, 0, 1, 2};
int size = sizeof data / sizeof(int);

auto cmp = [](const void* left, const void* right){
	int vl = *(const int*)left;
	int vr = *(const int*)right;

	if (vl < vr) return -1;
	if (vl > vr) return 1;
	return 0;
};

int value = 1;
void* el1 = bsearch(&value, data, size, sizeof(int), cmp);
// *static_cast<int*>(el1) == 1

value = 3;
void *el2 = bsearch(&value, data, size, sizeof(int), cmp); 
// el2 == nullptr
