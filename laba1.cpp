#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* найти минимальный элмент в области, область - КВАДРАТ 4x4*/

int oblast(int A[10][10], int, int, int*,int*);

int main() {
	int A[10][10];
	int N, M;
	int number = 0;
	do {
		printf("vvedite N and M cherez probel\n");
		scanf("%d %d", &N, &M);
	} while (N * M > 100);
	printf("vvedite elementi massiva\n");
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			scanf("%d", &A[x][y]);
		}
	}
	printf("--------------\n");
	int c = 1;
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			int min = oblast(A, N, M, &x, &y);
			printf("|3%d|%2d|%2d|%3d|\n", c, x, y, min);
			printf("--------------\n");
			c++;
		}
	}
}

int oblast(int A[10][10], int N, int M, int *i, int *j) {
	int B[16];
	int tmp = 0, x, y, cx = 0, cy = 0;
	x = *i;
	y = *j;
	if (y == 0) {
		for (x; x < N; x++) {
			if (cx <= 4) {
				for (y; y < M; y++) {
					if (cy <= 4) {
						B[tmp] = A[x][y];
						tmp++;
						cy++;
					}
					else break;
				}
				cx++;
			}
			else break;
		}
	}
	else {
		y - 1;
		for (x; x < N; x++) {
			if (cx <= 4) {
				for (y; y < M; y++) {
					if (cy <= 4) {
						B[tmp] = A[x][y];
						tmp++;
						cy++;
					}
					else break;
				}
				cx++;
			}
			else break;
		}
	}
	int min = 9999999;
	for (int i = 0; i < tmp; i++) {
		if (B[i] < min) min = B[i];
	}
	return min;
}
