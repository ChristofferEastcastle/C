#include <stdio.h>

int length(int array[]) {
	if (sizeof(array) > 0)
		return (sizeof(array) / sizeof(array[0]));
	else
		return -1;
}

int main() {

	int arr[][5] = {
		{1, 2, 3, 4, 5},
		{34, 343, 22, 22, 55},
		{22, 33 , 32, 45, 532}
	};

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		for (int k = 0; k < (sizeof(arr[i]) / sizeof(arr[i][0])); k++) {
			printf("%d ", arr[i][k]);
		}
		printf("\n");
	}
}



