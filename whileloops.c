#include <stdio.h>

int main() {

	int first = 10;
	
	while (first >= 0) {
		int x = 0;
		while (x < first) {
			printf("%d ", x);
			x++;
		}
		printf("\n");
		first--;
	}
			


	return 0;
}
