//#define maxjia
#ifdef maxjia

#include<stdio.h>
#define N 3
#define M 4

int * reverse_matrix(int x[][M],int y[][N], int p, int q)
{
	int i, j;
	for(i=0;i<p;++i)
		for (j = 0; j < q; ++j) {
			*(*(y + j) + i) = *(*(x + i) + j);
		}
	return *y;
}

int main()
{
	int a[N][M], b[M][N], *c, i, j;
	for ( i=0; i < N; ++i) {
		for (j = 0; j < M; ++j) {
			scanf_s("%d", *(a + i) + j);

		}
	}
   c= reverse_matrix(a, b, N, M);
	for (i = 0; i < M; ++i) {
		for (j = 0; j < N; ++j) {
			printf("%d", b[i][j]);
			if (j < N - 1) printf(" ");
		}
		printf("\n");
	}
	for (i = 0; i < M; ++i) {
		for (j = 0; j < N; ++j) {
			printf("%d", *(c+N*i+j));
			if (j < N - 1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}

#endif // maxjia
