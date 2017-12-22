//#define maxjia
#ifdef maxjia

#include<stdio.h>

void ar_rank_up(int *a, int i)
{
	int p, t, store, ns;
	for (p = 0; p < i-1; ++p) {//0 1 2   >>p>>     <<t i.
		store = *(a+p);
		for (t = i - 1; t >= p; --t) {
			if (*(a + t) < store) {
				store = *(a + t);
				ns = t;
			}// store==min of a[i] to a[p]
		}
			for (t = ns; t>=p+1 ; --t) {//t>p
				*(a + t) = *(a + t - 1);
			}
			*(a + p) = store;
		}
	}

int main()
{
	int a[15], i, si, n;
	int * pa = a;
	while (1) {
		scanf_s("%d", &n);
		if (n == 0) {
			return 0;
		}
		for (i = 0;i<n; ++i) {
			scanf("%d", &a[i]);
		}
		ar_rank_up(pa, n);
		for (i = 0; i < n; ++i) {
			printf("%d", a[i]);
			if (i < n - 1) printf(" ");
		}
		printf("\n");
	}
	return 0;
	
}




#endif // maxjia
