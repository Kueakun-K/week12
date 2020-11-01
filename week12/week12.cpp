#include <stdio.h>
int main() {
	int x[6], y[6],z;
	printf("Number of building (max 5): ");
	scanf_s("%d", &z);
	if (z >= 0 && z <= 5) {
		for (int i = 1; i <= z; i++) {
			printf("Building %d (Base,High) : ", i);
			scanf_s("%d %d", &x[i],&y[i]);
		}
		printf("\n");
		for (int a = 1; a <= z; a++) {
			for (int b = 1; b <= x[a]; b++) {
				for (int c = 1; c <= y[a]; c++) {
					printf("* ");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	else
		printf("ERROR");
	return 0;
}