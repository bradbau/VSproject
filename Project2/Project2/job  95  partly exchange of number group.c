//#define maxjia
#ifdef maxjia

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, k, i;

	while (scanf("%d  %d", &n, &k) != EOF) {
		int* a=(int *)malloc(n*sizeof(int)), * b =(int *) malloc(n * sizeof(int));
		for (i = 0; i < n; ++i) {
			scanf("%d", a+i);
		}
		for (i = 0; i < k; ++i) {
			*(b+i) =*(a+i);
		}
		for (i = k; i < n; ++i) {
			*(a+i - k) =*(a+i);
		}
		for (i = n-k; i < n; ++i) {
			*(a+i) = b[i - n + k];
		}
		for (i = 0; i < n; ++i) {
			printf("%d",*(a+i));
			if (i != n - 1)printf(" ");
			if (i == n - 1) printf("\n");
		}
		free(a);
		free(b);
	}
	
	return 0;
}


#endif // maxjia

//#define maxjia1
#ifdef maxjia1


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, k,i, c=0;
	while (scanf("%d &d", &n, &k) != EOF) {
		int *a = (int *)malloc(n * sizeof(int));
		for (i = k; ; ++i) {
			if (i < n&&c==0) scanf("%d", a + i);
			if (i == n&&c == 0) {
				i = 0;
				c = 1;
			}
			if (i < k&&c == 1) scanf("%d", a + i);
			if (i == k&&c == 1)break;
		}
		for (i = 0; i < n; ++i) {
			printf("%d", *(a + i));
			if (i != n - 1)printf(" ");
			if (i == n - 1) printf("\n");
		}
		free(a);

	}
	


}
#endif // maxjia1

