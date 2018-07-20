#include <stdio.h>

int main() {
	int *ptr_arr[3], **ptr_ptr;
	ptr_ptr = ptr_arr;

	int arr_1[] = {0, 1, 2};
	int arr_2[] = {10, 20, 30, 40};
	int arr_3[] = {200, 300, 400, 500, 600};

	ptr_arr[0] = arr_1;
	ptr_arr[1] = arr_2;
	ptr_arr[2] = arr_3;

	printf("%d\n", **ptr_ptr);
	printf("%d\n", *(*(ptr_ptr + 1) + 2));	// same as ptr_ptr[1][2]

	/*	p[1] == *(p+1);
		p[1][2] == *(*(p+1)+2);
		If p[1] == m, then p[1][2] == m[2]	*/

	return 0;
}