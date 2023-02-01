int data[] = {2, 1, 9, -1, 7, -8};
int size = sizeof data / sizeof(int);

qsort(data, size, sizeof(int),
	[](const void* left, const void* right){
		int vl = *(const int*)left;
		int vr = *(const int*)right;

		if (vl < vr) return -1;
		if (vl > vr) return 1;
		return 0;
	});
// data == {-8, -1, 1, 2, 7, 9}